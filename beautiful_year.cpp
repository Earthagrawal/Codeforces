#include<bits/stdc++.h>
using namespace std;

int check(int a){
    int r[4];
    for (int i=0; i<4; i++){
        r[i]= a%10;
        a = a/10;
    }
    int t=0;
    for(int i=0; i<4; i++){
        for(int j=1+i; j<4; j++){
            if(r[i]==r[j]){
                t = 1;
                break;
            }
        }
    }
    return t;
}


int main(){
    int n,t=0;
    cin>>n;
    n++;

    t=check(n);

    if(t==0){
        cout<<n;
    }
    else{
        while(t>0){
            n++;
            t= check(n);
        }
        cout<<n;
    }
    return 0;
}
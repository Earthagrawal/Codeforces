#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, count=0;
    cin>>n;
    while(n>0){
        if(n>=5){
            n-=5;
            count++;
        }

        if(n==4){
            n-=4;
            count++;
        }

        if(n==3){
            n-=3;
            count++;
        }

        if(n==2){
            n-=2;
            count++;
        }

        if(n==1){
            n-=1;
            count++;
        }

    }
    cout<<count; 
    return 0;
}
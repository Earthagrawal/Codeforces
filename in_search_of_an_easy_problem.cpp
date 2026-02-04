#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,t=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>r;
        if(r==1){
            t=1;
        }
    }

    if(t==0) cout<<"easy";
    else  cout<<"HARD";
    return 0;
}
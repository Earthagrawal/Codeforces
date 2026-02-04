#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i=0;
    cin>>n >>m;
    while(n<=m){
        n= n*3;
        m=m*2;
        i++;
    }
    cout<<i;
    return 0;
}
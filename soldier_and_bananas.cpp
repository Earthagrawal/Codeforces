#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w, sum=0, borrow=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++){
        sum += k*i;
    }

    if(sum>n) borrow = sum-n;

    cout<<borrow;
}
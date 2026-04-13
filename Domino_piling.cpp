#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,m,b=0;
    cin >>n>>m;
    b=n*m;

    if( b%2==0 ){
        cout<<b/2;
    }
    else{
        cout<< (b-1)/2;
    }
}
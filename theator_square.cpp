#include<iostream>
using namespace std;

int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int ns= ((n+a-1)/a)*a, ms=((m+a-1)/a)*a ;
    
    long long int p= (ns*ms)/(a*a);
    cout<<p;
}
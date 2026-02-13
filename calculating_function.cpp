#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n, m= -1;
    cin>>n;

    if(n%2 == 0){
        cout<<n/2;
    }
    else{
        cout<<m*((n+1)/2);
    }
}
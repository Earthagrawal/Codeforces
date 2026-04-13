#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>> n>>k>>l>>c>>d>>p>>nl>>np;

    int toast_salt = p/np;
    int toast_drink = (k*l)/nl;
    int toast_lemon = c*d;

    int mini = min( toast_lemon , toast_drink );
    int minimum = min( mini,  toast_salt );

    cout<< minimum/n;
}

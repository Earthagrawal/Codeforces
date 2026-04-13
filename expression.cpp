#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if((a==1) && (b!=1) && (c!=1)) cout<<(a+b)*c;
    else if((a==1) && (b==1) && (c!=1)) cout<< (a+b)*c;
    else if(((a==1) && (b==1) && (c==1)) || ((a==1) && (b!=1) && (c==1))) cout<< (a+b+c);
    else if((a!=1) && (b==1) && (c!=1)){
        int t1= (a+b)*c;
        int t2 = (c+b)*a;
        cout<<max(t1,t2);
    }
    else if( (a!=1) && (b==1) && (c==1) ) cout<<a*(b+c);
    else if((a!=1) && (b!=1) && (c==1)) cout<<a*(b+c);
    else cout<<a*b*c;

}
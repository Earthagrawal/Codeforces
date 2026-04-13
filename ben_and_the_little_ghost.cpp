#include <iostream>
#include <vector>
#include <string>
using namespace std;

void check(){
    string s;cin>>s;
    int a,b;
    a = (s[0] - 48 );
    b = (s[2] - 48 );
    char c = s[1];

    if( c == '<'){
        if(a<b) cout<<a<<'<'<<b<<endl;
        else{
            a=b-1;
            cout<<a<<'<'<<b<<endl;
        }
    }
    else if(c == '>'){
        if(a>b) cout<<a<<'>'<<b<<endl;
        else{
            a=b+1;
            cout<<a<<'>'<<b<<endl;
        }
    }
    else{
        if(a==b) cout<<a<<'='<<b<<endl;
        else{
            if(a<b){
                cout<<a<<'<'<<b<<endl;
            }
            else cout<<a<<'>'<<b<<endl;
        }
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}
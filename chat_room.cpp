#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s; cin>>s;
    int f1=0, f2=0, f3=0, f4=0;

    for(int i=0; i<s.size(); i++){
        if( s[i] == 'h' ) f1=1;
        else if( (s[i] == 'e') && (f1==1) ) f2=1;
        else if( (s[i] == 'l') && (f1==1) && (f2==1) && (f3==0)) f3=1;
        else if( (s[i] == 'l') && (f1==1) && (f2==1) && (f3==1)) f4=1;
        else if( (s[i] == 'o') && (f1==1) && (f2==1) && (f3==1) && (f4==1) ){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}


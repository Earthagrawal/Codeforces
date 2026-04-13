#include <iostream>
#include <string>
using namespace std;

void check(string s){
    int f=0;
    for(int i=0; i<s.size(); i++){
        if((i <= s.size()-3) && (s[i]=='W') && (s[i+1]=='U') && (s[i+2]=='B') ){
            i=i+2;
        }
        else if (( (s[i] != 'W') || (s[i+1] != 'U') || (s[i+2] != 'B') ) && (f==1) && ((s[i-3]=='W') && (s[i-2]=='U') && (s[i-1]=='B'))){
            cout<<" "<<s[i];
        }
        else {
            f=1;
            cout<<s[i];
        }
    }
}

int main(){
    string s; cin>>s;
    check(s);
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,ss,sss;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y' ){
            continue;
        }
        else{
            if( s[i]>64 && s[i]<91) s[i] +=32;
            ss.append(1,s[i]);
        }
    }

    for(int i=0; i<ss.size(); i++){
            sss += '.';
            sss += ss[i];
    }

    cout<<sss;
}

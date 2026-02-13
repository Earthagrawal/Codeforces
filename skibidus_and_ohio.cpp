#include <iostream>
#include <string>
#include <vector>
using namespace std;

void check(string s){
    for (int i=0; i<s.size()-1; i++){
        if (s[i] == s[i+1]){
            s.erase(i+1);
            if(i!=0){
                s[i] = s[i-1];
                i-=2;
            }
        }
    }
    cout<<s.size()<<endl;
}

int main(){
    int t;cin>>t;
    while (t--){
        string s; cin>>s;
        check(s);
    }
}
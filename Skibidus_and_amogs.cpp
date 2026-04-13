#include <iostream>
#include <string>
using namespace std;

void check(string s){
    int f=0;
    for(int i=0; i<s.size()-2; i++){  
        cout<<s[i];    
    }
    cout<<'i'<<endl;
}

int main(){
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        check(s);
    }
}
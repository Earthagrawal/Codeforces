#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size(), lc=0, uc=0;

    for(int i=0; i<n; i++){
        if(s[i]>=65 && s[i]<=90){
            uc++;
        }
        else lc++;
    }

    if(lc>=uc){
        for(int i=0; i<n; i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] +=32;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(s[i]>=97 && s[i]<= 122){
                s[i] -=32;
            }
        }
    }
    cout<<s;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a[26]={0}, n= s.size(), p,count=0;

    for(int i=0; i<n; i++ ){
        p = s[i] - 97;
        a[p]++;
    }

    for(int i=0; i<26; i++ ){
        if(a[i]>0){
            count++;
        }
    }

    if(count%2 == 0) cout<< "CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    
}
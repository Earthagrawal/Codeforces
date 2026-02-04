#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int n = s.size(),m= t.size(),l, f=0;

    if(n>m) l=n;
    else l=m;
    for (int i=0; i<l; i++){
        if(t[l-i-1] != s[i]) f=1;
    }

    if(f==1) cout<<"NO";
    else cout<<"YES";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int count =1, flag=0;

    int n; cin>>n;
    string s; cin>>s;
    for (int i=1; i<n; i++){
        if(s[i] != s[i-1]) count++;
        if(!flag && s[i]==s[i-1]) flag=1;
    }

    if(flag && s[0]!=s[n-1]) cout<<count+1 <<endl;
    else cout<<count<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
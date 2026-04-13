#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,q; cin>>n>>q;
    string s; cin>>s;
    bool fl = (s.find('B') != string::npos);
    while(q--){
        int count=0;
        int m; cin>>m;
        int i=0;
        if(!fl){
            count = m;
        }
        else{
            while(m!=0){
            count++;
            if(s[i]== 'A') m--;
            else           m/=2;

            i = (i+1)%n;
        }
    }
    cout<<count<<endl;
}








}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    string s; cin>>s;
    int ycount=0;

    for (int i=0; i<s.size(); i++){
        if(s[i]=='Y') ycount++;
        if(ycount>1){
        cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
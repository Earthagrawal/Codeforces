#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,tens=1,digits=0; cin>>n;
    int m=n;
    while(m!=0){
        digits++;
        m=m/10;
    }
    for(int i=0; i<(digits-1);i++){
        tens*= 10;
    }
    int x = n/tens, ans = x + 9* (digits-1);
    cout<<ans<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n, ans=0; cin>>n;
    int x = n/3;
    n = n- (3*x);
    vector <int> v(3,x);
    ans += v[0];
    v[2] += n;
    while(v[2]>2){
        n=v[2];
        x = n/3;
        v[0] = x;
        v[1] = x;
        v[2] = x;
        n = n-(3*x); 
        ans += v[0];
        v[2] += n;
    }

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
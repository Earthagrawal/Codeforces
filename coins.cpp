#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,k; cin>>n>>k;

    if(n%k == 0)            cout<<"YES"<<endl;
    else if(n%2 == 0)       cout<<"YES"<<endl;
    else if(k%2 == 1)       cout<<"YES"<<endl;
    else                    cout<<"NO"<<endl;
    
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
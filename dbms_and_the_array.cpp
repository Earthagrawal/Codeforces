#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,s,x; cin>>n>>s>>x;
    int sum=0,t;

    while(n--){
        cin>>t;
        sum+=t;
    }

    if( ((s-sum)%x==0) && (s>=sum))  cout<<"YES"<<endl;
    else              cout<<"NO"<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
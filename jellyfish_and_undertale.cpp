#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int a,b,n,t,ans=0;
    cin>>a>>b>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }

    ans+= (b-1);
    
    for(int i=0; i<n ;i++){
        if(v[i]<a){
            ans += v[i];
        }
        else{
            ans+= a-1; 
        }
    }

    ans++;
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
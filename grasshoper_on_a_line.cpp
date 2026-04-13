#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,k; cin>>n>>k;
    if(n<k){
        cout<<1<<endl<<n<<endl;
    }

    else{
        if(n%k ==0){
            cout<<2<<endl<<n-1<<" "<<1<<endl;
        }
        else{
            cout<<1<<endl<<n<<endl;
        }
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
#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,a,b;
    cin>>n>>a>>b;

    if(a+b < n-1)           cout<<"Yes"<<endl;
    else if( (a+b) == 2*n)    cout<<"Yes"<<endl;
    else                    cout<<"No"<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
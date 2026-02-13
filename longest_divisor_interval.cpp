#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n, x=1;
    cin>>n;
    if(n%2==1){
        cout<<1<<endl;
    }
    else{
        while(n%x==0){
            x++;
        }
        cout<<x-1<<endl;
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
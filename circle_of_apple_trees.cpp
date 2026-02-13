#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n; cin>>n;
    set<int> s;
    while(n--){
        int t; cin>>t;
        s.insert(t);
    }
    cout<<s.size()<<endl;
}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
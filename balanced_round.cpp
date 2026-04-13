#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,k,t; cin>>n>>k;
    vector <int> v;
    set <int> s;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }

    sort(all(v));                             
    int count=1;
    for(int i=0; i<n-1; i++){
        if((v[i+1] - v[i]) <=k ){
            count++;
        }
        else{
            s.insert(count);
            count=1;
        }
    }
    s.insert(count);
    auto it = --s.end();
    int m = *it;

    cout<<n-m<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
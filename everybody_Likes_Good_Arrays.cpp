#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,t, count=0; cin>>n;
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }

    for(int i=0; i<(v.size()-1); i++){
        if( (v[i]%2 ==0 )  && (v[i+1]%2 ==0 ) ){
            count++;
        }
        if( (v[i]%2 ==1 )  && (v[i+1]%2 ==1) ){
            count++;
        }
    }

    cout<<count<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
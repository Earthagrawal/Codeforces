#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int count=0, maxcount=0, n, t;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }

    for(auto i: v){
        if(i==1){
            count=0;
        }
        else{
            count++;
            maxcount = max(count, maxcount);
        }
    }
    cout<<maxcount<<endl;

}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
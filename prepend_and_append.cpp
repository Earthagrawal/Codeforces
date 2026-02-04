#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    deque <char> d;
    string str;
    int t, n; cin>>n>>str;

    for(int i=0; i<n; i++){
        d.push_back(str[i]);
        
    }
    while(d.size() != 0){
        if( ((d.front() == '0') && (d.back() == '1'))   || ((d.front() == '1') && (d.back() == '0')) ){
            d.pop_back();
            d.pop_front();
        }
        else{
            break;
        }
    }

    cout<<d.size() << endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
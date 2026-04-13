#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n; cin>>n;
    deque<int> d;
    int t;

    for(int i=0; i<n; i++){
        cin>>t;
        d.push_back(t);
    }
    int m = d[1] - d[0];
    for(int i=0; i<n-1; i++){
        m = min(m, (d[i+1]- d[i] ));
    }
    if(m<0){ 
        cout<<0<<endl;
    }
    else{
        m=m+1;
        m= ceil((double) m/2);
        cout<<m<<endl;

    }
}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
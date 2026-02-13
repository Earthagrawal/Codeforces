#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,t=0; cin>>n;
    int sum=0;

    for(int i=0; i<n; i++){
        cin>>t;
        sum += t; 
    }
    if(sum%2 == 0){
        cout<< "YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
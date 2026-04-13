#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
//#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,t;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }

    int count=0;
    for(int i=1; i<n; i++){
        if(v[i]<v[i-1]) count++;
    }

    cout<<n+count<<endl<<v[0]<<" ";
    for(int i=1; i<n; i++){
        if(v[i]<v[i-1]){
            cout<<v[i]<<" "<<v[i]<<" ";
        }
        else cout<<v[i]<<" ";

    }
    cout<<endl;
}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
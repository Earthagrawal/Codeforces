#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n; cin>>n;
    int m=0;
    vector <int> v;
    int flag =0;
    int t;
    for(int i=0; i<n;i++){
        cin>>t;
        m = max(t, m);
        v.push_back(t);
        if(t==0){
            flag=1;
        }
    }
    
    if(flag ==0){
        cout<<0<<endl;
    }
    else{
        int count[m+1] = {0};

        for(int i: v){
            count[i]++;
        }
        int fl=0;

        for(int i=0; i<=m; i++){
            if(count[i] == 0){
                cout<<i<<endl;
                fl=1;
                break;
            }
        }
        if(fl==0){
            cout<<m+1<<endl;
        }
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
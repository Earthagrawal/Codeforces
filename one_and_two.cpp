#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n; cin>>n;
    vector <int> v;
    int t, count =0;
    for(int i=0; i<n; i++){
        cin>>t;
        if(t==2)   count++;
        v.push_back(t);
    }

    if(!count)                cout<<1<<endl;
    else if( count%2 == 1)    cout<<-1<<endl;
    else{
        count /= 2;
        int i;
        for(i=0; i<n; i++){
            if(v[i] == 2)     count--;
            if(!count)        break;
        }
        cout<<i+1<<endl;
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
#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,t;  cin>>n;
    int XOR=0;
    for(int i=0; i<n; i++){
        cin>>t;
        XOR = XOR^t;
    }
    if(n%2 ==1)        cout<<XOR<<endl;
    else{
        if(XOR ==0)    cout<<XOR<<endl;
        else           cout<<-1<<endl;
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
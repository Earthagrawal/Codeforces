#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,a, l=0, m=0, e=0;
    cin>>n>>a;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>a) m++;
        else if(v[i]<a) l++;
        else e++;
    }
    int ma = max(l,m);
    ma = max(ma,e);
    if(ma == e)       cout<<1<<endl;
    else if(ma == l)  cout<<a-1<<endl;
    else              cout<<a+1<<endl;
    //if((l>=m) && (a!=1)) cout<<a-1<<endl;
   // else                 cout<<a+1<<endl;

}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
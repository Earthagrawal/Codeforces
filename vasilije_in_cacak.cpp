#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n ,x,k;
    cin>>n>>k>>x;

    int min_sum = ((k+1)*k)/2;
    int max_sum = (((2*(n-k+1))+ (k-1))*k)/2;

    if(x<= max_sum && x>=min_sum){
                           cout<<"YES"<<endl;
    }
    else                   cout<<"NO"<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
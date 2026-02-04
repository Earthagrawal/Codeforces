#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
int GCD (int m1, int m2){
    int gcd;
    while((m1 != 0) &&  (m2!=0)){
            gcd = m1;
            m2 %= gcd;
            m1 = m2;
            m2 = gcd;
        }

        if(gcd <= 2)                  return 1;
        else                          return 0;

}

void solve(){
    int n;
    cin>>n;
    vector <int> v;
    int t;
    int m1 = INT_MAX;
    int m2 = m1;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }

    int gcd, flag=0;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++ ){
            bool gg = GCD( v[i], v[j] );
            if(gg){
                flag=1;
                break;
            }
        }
        if(flag)   break;
        
    }

    if(flag)      cout<<"YES"<<endl;
    else      cout<<"NO"<<endl;
        

}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
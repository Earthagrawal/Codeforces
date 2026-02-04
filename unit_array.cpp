#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n; cin>>n;
    vector <int> v;
    int t, count=0;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }

    int sum = accumulate(all(v), 0LL);
    if(sum<0){
        int m = 0-sum;
        int abcd=n;
        m= (m+1)/2;
        while(abcd-- && m>0){
            if(v[abcd] == -1){
                v[abcd] =1;
                count++;
                m--;
            }
            
        }
    }

    int sign =1;
    for(int i: v){
        sign *= i; 
    }
    if(sign != 1){
        for(int i=0; i<n; i++){
            if(v[i] == (-1)){
                v[i] =1;
                count++;
                break;
            }   
        }
    }
    cout<<count<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
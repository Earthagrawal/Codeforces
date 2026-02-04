#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,q;
    cin>>n>>q;

    vector <int> a(n),b(n);

    for(int i=0; i<n;i++){            
        cin>>a[i];
    }
    for(int i=0; i<n;i++){
        cin>>b[i];
    }

    a[n-1] = max(a[n-1], b[n-1] );

    for(int i=n-2; i>=0; i--){
        if(a[i] < max(b[i], a[i+1])){
            a[i] = max(b[i], a[i+1]);
    }
    }

    vector <int> prefix(n+1);
    prefix[0] = 0;
    for(int i=1; i<=n; i++){
        prefix[i] = prefix[i-1] + a[i-1];
    }

    while(q--){
        int start,end; cin>>start>>end;
        start--;
        //if(start!=0 && a[start]<a[start-1]){
       //     a[start] = a[start-1] + a[start] - (a[start-1] = a[start]);
       // }


        cout<<(prefix[end] - prefix[start] )<<" ";

    }

    cout<<endl;

}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int a,b; cin>>a>>b;
    int xk,yk; cin>>xk>>yk;
    int xq,yq; cin>>xq>>yq;
    set <pair <int,int>> v1,v2;

    /*int sum = a+b;
    int distx = abs(xk-xq);
    int disty = abs(yk-yq);*/

    int dx[8] = { a,  a, -a, -a,  b, -b,  b, -b};
    int dy[8] = { b, -b,  b, -b,  a,  a, -a, -a};
    for(int i=0; i<8 ; i++){
        int x = dx[i] + xk;
        int y = dy[i] + yk;
        v1.insert( make_pair(x,y) );
    }
    
    for(int i=0; i<8 ; i++){
        int x = dx[i] + xq;
        int y = dy[i] + yq;
        v2.insert( make_pair(x,y) );
    }
    int count =0;
    for(auto x: v1){
        if(v2.find(x) != v2.end()) count++;
    }
    cout<<endl<<count<<endl;

    
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
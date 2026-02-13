#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(d-b < 0)        cout<<-1<<endl;
    else if((c-a) > (d-b))    cout<<-1<<endl;
    else{
        int steps =0 ;
        steps+= (d-b);
        int k=steps;
        steps += (a+k)-c ;

        cout<<steps<<endl;

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
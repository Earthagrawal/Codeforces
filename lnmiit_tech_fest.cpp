#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int u,p,b, cost=0,sys=0; cin>>u>>p>>b;

    vector <int> usb,ps2;

    int m; cin>>m;
    while(m--){
        int t; string s;
        cin>>t>>s;
        if(s == "USB"){
            usb.push_back(t);
        }

        else if(s == "PS/2"){
            ps2.push_back(t);
        }
    }

    sort(all(ps2));
    sort(all(usb));

    int i=0,j=0;

    if(u){
        while(u && i<usb.size()){
            cost+= usb[i];
            sys++;
            i++;
            u--;
        }
    }

    if(p){
        while(p && j<ps2.size()){
            cost+= ps2[j];
            sys++;
            j++;
            p--;
        }
    }

    if(b){
        while(b && (i<usb.size() && j<ps2.size()) ){
            if(usb[i] <= ps2[j]){
                cost+= usb[i];
                sys++;
                i++;
            }
            else{
                cost+= ps2[j];
                j++;
                sys++;
            }
            b--;
        }

        while(b && i<usb.size()){
            cost+= usb[i];
            i++;
            sys++;
            b--;
        }

        while(b && j<ps2.size()){
            cost+= ps2[j];
            j++;
            sys++;
            b--;
        }
    }

    cout<<sys<<" "<<cost;

}
 
int32_t main(){
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}


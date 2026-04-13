#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,k,x;
    cin>>n>>k>>x;

    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        while(n--){
            cout<<1<<" ";
        }
        cout<<endl;
    }

    else{
        if(n==3 && k<3){
            cout<<"NO"<<endl;
        }
        else{
            if(k==x){
                cout<<"NO"<<endl;
            }
            else if(n%2 ==0){
                cout<<"YES"<<endl<<n/2<<endl;
                n=n/2;
                while(n--){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else if(k>=3){
                cout<<"YES"<<endl<<n/2<<endl;
                n=n/2;
                n--;
                while(n--){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
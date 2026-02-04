#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n; cin>>n;
    vector<int> a;
    vector<int> b;
    vector<int> c;

    for(int i=0; i<n; i++){
        int t;cin>>t;
        a.push_back(t);
    }

    sort(all(a));
    b.push_back(a[0]);
    if (a[0] == a[n-1]){
        cout<<-1<< endl;
        return;
    }

    int i=1;
    int flag;
    for(i; i<n; i++){
        flag=0;
        for(int j=0; j<b.size(); j++)
        {
            if((b[j] % a[i]) == 0){
                b.push_back(a[i]);
                flag =1;
            }
            if(flag==1) break;
        }
        if(flag==0)
        {
            c.push_back(a[i]);
        }
    }

    if(b.size() ==0 || c.size() == 0){
        cout<<-1<<endl;
    }
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int j=0; j<b.size(); j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;
        for(int j=0; j<c.size(); j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;
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
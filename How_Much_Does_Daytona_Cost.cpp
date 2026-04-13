#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 

void search(){
    int n,k;
    int flag=0;
    cin>>n>>k;
    vector<int> v;
    int t;
    for(int i=0; i<n;i++){
        cin>>t;
        v.push_back(t);
    }

    for(int i : v){
        if(i==k) {
            flag=1;
            break;
        }
    }

    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){

        search();
 
    }
}
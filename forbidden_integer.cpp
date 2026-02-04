#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,k,x, temp;
    cin>>n>>k>>x;
    vector <int> v;
    int i;

    (x==1)? i=2:i=1;

    for(i ; (i<=k) && (i!=x) ; i++){
        if(n%i == 0){
            cout<<"YES"<<endl;
            cout<<n/i<<endl;
            temp = n/i;
            while(temp --){
                cout<< i<<" ";
            }
            cout<<endl;
            return;
        }
    }
    int ab=k;
    int flag=0;

    for(int k=ab; k>0; k--){
        int sum=0;
        v.clear();
        while((sum < n) && (k>0)){
            if( ((sum+k)<= n) && (k!= x) ){
                sum += k;
                v.push_back(k);
            }
            else{
                k--;
            }
        }
    
        if(sum == n){
            flag=1;
            break;
        }
    }

    if(flag ==1){
        cout<<"YES"<<endl<<v.size()<<endl;
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

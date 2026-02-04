#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,k,count;
    cin>>n>>k;
    string s;
    cin>>s;
    multiset <int> os, es;

    for(int i=0; i<s.size(); i++){
        count=1;
        for(int j=i+1; j<s.size();j++){
            if(s[i] == s[j]){
                s.erase(j,1);
                count++;
                j--;
            }
        }
        if(count %2  ==0)  es.insert(count);
        else               os.insert(count);
        s.erase(i,1);
        i--;
    }

    while( (!os.empty()) && (k>0) ){
        k--;
        int cnt = *(os.begin());
        os.erase(os.begin());
        cnt--; 
        if(cnt>0 )      es.insert(cnt);

    }

    if(os.size() >1)     cout<<"NO"<<endl;
    else                 cout<<"YES"<<endl;

}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
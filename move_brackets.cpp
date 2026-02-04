#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n, count =0; 
    cin>>n;
    string st;
    cin>>st;
    stack <char> s;
    for(int i=0; i<n; i++){
        if(st[i] == '('){
            s.push(st[i]);
        }
        else if(st[i] == ')'){
            if(!(s.empty())){
                s.pop();
            }  
            else{
                char ch =st[i];
                st.erase(i, 1); 
                st = st+ch;
                i=i-1;
                count++;
            }
        }
    }

    cout<<count<<endl;
}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
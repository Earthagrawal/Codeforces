#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    char ch[10][10];
    char t;
    int points=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>t;
            ch[i][j] = t;
        }
    }
    int m,n;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(ch[i][j] == 'X'){
                m= min(i+1, 10-i);
                n= min(j+1, 10-j);
                m=min(m,n);
                points+= m;
            }
            
        }
    }
    cout<<points<<endl;

}
 
int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
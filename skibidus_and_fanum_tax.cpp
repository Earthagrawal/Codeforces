#include <iostream>
#include <string>
#include <vector>
using namespace std;

void check(int n, int m){
    int f=0;
    vector <int> v;
    for(int i=0; i<n; i++){  
        int a; cin>>a;
        v.push_back(a);    
    }
    int b;
    cin>>b;

    for(int i=0; i<v.size()-1; i++){
        if(v[i] <= v[i+1]){
            continue;
        }
        else{
            v[i+1] = b-v[i+1];
            if(v[i] > v[i+1]){
                f=1;
                break;
            }
            
        }
    }
    if(f==0) cout<<"YES";
    else cout<<"NO";
}

int main(){
    int whee; cin>>whee;
    while(whee--){
        int n,m; cin>>n>>m;
        check(n,m);
    }
}
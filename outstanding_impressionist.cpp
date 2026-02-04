#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        vector <pair<int,int>> v;
        for(int j=0; j<n; j++){
            pair<int,int> p;
            cin>>p.first>>p.second;
            v.push_back(p);
        }

        for(pair<int,int> p: v){
            if((p.first== p.second) || (p.first== p.second-1) || (p.first== p.second+1) ) cout<<0;
            else cout<<1;
        }

        cout<<endl;
    }
}
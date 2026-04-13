#include<bits/stdc++.h>
using namespace std;

void answer(){
    int n; cin>>n;
    vector<int> v;
    int m=n;
    while(m--){
        int t; cin>>t;
        v.push_back(t);
    }
    int min=0;
    int max=0;
    for(int i=0; i<n;i++){
        min = (v[i] < v[min])? i:min; 
        max = (v[i]> v[max])? i:max;
    }
 
    if((max==0) || (min!=0) ){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        answer();
    }
}
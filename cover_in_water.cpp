#include<bits/stdc++.h>
using namespace std;

void answer(){
    int n;
    cin>>n;
    string s(n,' ');
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    int count =0;
    if(s[0] == '.') count++;
    for(int i=1; i<n-1; i++){
        if((s[i-1] =='.' && s[i+1]=='.') && s[i] == '.') {
            cout<<"2"<<endl;
            return;
        }
        if(s[i-1] =='.' && s[i+1]=='.') continue;
        else if(s[i]=='.') count++;
    }
    if((s[n-1]=='.') && n!=1) count++;

    cout<<count<<endl;
}

int main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        answer();
    }
}

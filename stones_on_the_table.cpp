#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char c;
    int n,j, count=0;
    cin>>n>>s;
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }     
    cout<<count; 
    return 0;
}
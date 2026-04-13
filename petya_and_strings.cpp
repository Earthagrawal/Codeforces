#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size(), f=0,a,b;

    for (int i=0; i<n; i++){
        a=int(s1[i]), b=int(s2[i]);

        if(a>=97) a=a-32;
        if(b>=97) b=b-32;

        if(a<b){
            f=-1;
            break;
        } 
        else if(a>b){
            f=1;
            break;
        }

    }
    cout<<f;
    
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    for(int j=0;j<t; j++ ){
        for(int i=0; i<n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G' ){
                char t;
                t = s[i+1];
                s[i+1] = s[i];
                s[i] = t;
                i++;
            }
        }    
    }
    
    for(int i=0; i<n; i++){
        cout<<s[i];
    }
}
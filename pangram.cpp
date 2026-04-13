#include <iostream>
#include<string>
using namespace std;

int main(){
    //input
    int n;
    cin>>n;
    string s;
    cin>>s;

    //all lowercase
    for(int i=0;  i<n; i++){
        if( s[i]>64 && s[i]<91){
            s[i] += 32;
        }
    }

    //hash arr
    int hash[26] = {0};
    for(int i=0;  i<n; i++){
        hash[s[i]-97]++;
    }


    //check for any zero
    int f=0;
    for(int i=0;  i<26; i++){
        if( hash[i] == 0){
            f=1;
            break;
        }
    }
    if(f==1) cout<<"NO";
    else cout<<"YES";

}
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    string s;
    cin >> s ;
    int count=1;

    for(int i=0; i<s.size();){
        if( s[i] == s[++i]){
            count++;
            }
        else{
            if(count>=7){
                cout<<"YES";
                exit(0);
            }
            else{
                count=1;
            }
        }
        
    }
    cout<<"NO";
}

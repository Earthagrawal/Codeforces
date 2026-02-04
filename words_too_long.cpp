#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        string w;
        cin >>w;
        int n= w.size();
        for (int i=0; i<n; i++){
            if(w[i] >= 48 && w[i]<=57){
                w="";
            }
        }
        n= w.size();

        if(n<=10){
            cout << w<<endl;
        }

        else{
            cout << w[0]<< n-2 <<w[n-1]<<endl ;
        }
    }
}
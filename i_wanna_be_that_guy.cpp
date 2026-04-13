#include <iostream>
#include <cstdlib>
using namespace std;
 
int main(){
    int n,p,q; 
    cin>>n>>p;
    int hash[n]={0} ;

    for (int i=0; i<p; i++){
        int j;cin>>j;
        hash[j-1]++;
    }
    cin>>q;
    for (int i=0; i<q; i++){
       int j;cin>>j;
        hash[j-1]++;
    }
    for(int i=0; i<n; i++){
        if(hash[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
}
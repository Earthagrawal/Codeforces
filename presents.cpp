#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int r[n+1];

    for(int i=1; i<=n; i++){
        cin>>r[i];
    }

    for(int i=1; i<=n; i++){
        for( int j=1; j<=n; j++ ){
            if( r[j] == i ){
                cout<<j<<" ";
                break;
            }
        }
    }
}
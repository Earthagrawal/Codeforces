#include <iostream>
using namespace std;

int main(){
    int nt; cin>>t;

    for(int i=0; i<t; i++){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                cin>>arr[j][k];
            }
            
        }
    }

    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<endl;
    }
}
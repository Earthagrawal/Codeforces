#include <iostream>
using namespace std;

int main(){
    int nt; cin>>t;
    arr[t];

    for(int i=0; i<t; i++){
        int n,k, score=0;
        cin>>n>>k;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[i];
        }
        for(int j=0; j<n; j++){
            for(int l=0; l<n; l++){
                if(l != j){
                    if( (a[j]+a[l]) == k ){
                        score++;
                        continue;
                    }
                }
            }
        }
        
    }

    for(int i=0; i<t; i++ ){
        cout<<arr[i]<<endl;
    }
}
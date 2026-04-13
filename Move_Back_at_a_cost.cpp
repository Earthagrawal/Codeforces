include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0; i<n;i++){
        int m; cin>m;
        int arr[m];
        for(int j=0; j<m; j++){
            cin>>arr[j];
        }

        int mini=0;
        for(int j=0; j<m; j++){
            if(arr[mini] > arr[j]){
                mini=j;
            }
        }
        

    }
}
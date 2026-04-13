#include <iostream>
using namespace std;

int main(){
    int n; cin>> n;
    int arr[n];

    for(int i=0; i<n; i++){
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int a3 = a1+a2;

        if(a3 == (a4 -a2)){
            if(a5 == (a3+a4)){ 
                arr[i] = 3;
            }
            else{ 
                arr[i] = 2;
            }
        }
        else if ( a5 == (a3+a4) ){
            arr[i] = 2;
        }
        else{
            a3= a4-a2;
            if(a5 == (a3 + a4)){
                arr[i] = 2;
            }
            else{
                arr[i] = 1;
            }
        }
    }

    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<endl;
    }
}
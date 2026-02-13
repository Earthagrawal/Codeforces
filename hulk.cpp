#include<iostream>
#include<string>
using namespace std;


int main(){
    int n;
    cin>>n;

    string love1 ="I love it", love2 ="I love that", hate1 ="I hate that" , hate2 ="I hate it" ;
    if(n%2==1){
        for(int i=n; i>0; i=i-2 ){
            if(i==1){
                cout<<"I hate it ";
                break;
            }
            cout<<"I hate that I love that ";
        }
    }

    if(n%2==0){
        for(int i=n; i>0; i-- ){
            if(i==1){
                cout<<"I love it ";
                break;
            }
            else if(i==2){
                cout<<"I hate that ";
            }
            else{
                cout<<"I hate that I love that ";
                i--;
            } 
        }
    }

}



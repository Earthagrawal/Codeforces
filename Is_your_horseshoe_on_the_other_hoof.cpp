#include<iostream>
#include<string>
using namespace std;

int main(){
    int n[4], count=0;
    for (int i=0; i<4; i++){
        cin>>n[i];
    }

    for (int i=0; i<3; i++){
        for (int j=i+1; j<4; j++){
            if ((n[i] == n[j])&& (n[j] != 0)){
                count++;
                n[j] = 0;
            }
        }
    }
    cout<<count;
}
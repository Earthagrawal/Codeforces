#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int en,ex,pit=0, max=0;

    for (int i=0; i<n; i++){
        cin>>ex>>en;
        pit = pit-ex+en;
        if(pit>max){
            max=pit;
        }
    }
    cout<<max;
}
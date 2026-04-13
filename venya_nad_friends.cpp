#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,width=0, ph;
    cin>>n>>h;

    for(int i=0; i<n; i++){
        cin>>ph;
        int f=1;
        if(ph>h){
            f=2;
        }
        width += f;
    }
    cout << width;
    return 0;
}
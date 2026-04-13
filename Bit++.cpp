#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0;
    cin>>n;

    for (int j=0; j<n; j++){
        string w;
        cin >> w;

        for(int i=0; i<3; i++){
            if( w[i] == '+' ){
                m++;
                break;
            }
            else if( w[i] == '-'){
                m--;
                break;
            }
        }

    }
    cout<< m;
    return 0;
}
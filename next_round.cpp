#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m, count=0;
    cin >>n>> m;
    int a[n];

    
    for (int i=0; i<n; i++){
        cin >>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] >= a[m-1]){            
            if (a[i] > 0) count++;
        }
        
    }
    cout<< count;
    return 0;

}
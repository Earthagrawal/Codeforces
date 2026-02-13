#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=1;
        int a[n], b[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                ans+= a[i]-b[i];
            }
        }

        cout<<ans;
    }
}
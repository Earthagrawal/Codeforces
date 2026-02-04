// wrong fking code
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        int f[n][m];
        for(int k=0; k<m; k++){
            f[i][k] =  0;
        }

        int a[m], b[m];
        for(int j=0; j<m; j++){
            cin>>a[j];
        }
        for(int j=0; j<m; j++){
            cin>>b[j];
        }
        
        for(int j=0; j<m; j++){
            if(a[j] < b[j]){
                for(int k=0; k<m; k++ ){
                    if(k==j){
                        a[k]++;
                    }
                    else a[k]--;
                }
            }
        }

        
        for(int j=0; j<m; j++){
            if(a[j] < b[j]){
                f[i][j]=1;
            }
        }

        if(i==(n-1)){
            for(int k=0; k<n; k++){
                int flag=0;
                for(int j=0; j<m; j++){
                    if(f[i][j] == 1){
                        flag =1;
                        
                    } 
                }
                if(flag == 0){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
}
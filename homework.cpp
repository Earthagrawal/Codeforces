
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        
        string a,b,c;
        int n,m;
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b>>c;
        
        for(int i=0; i<m;i++){
            if(c[i]=='V'){
                a.insert(a.begin(), b[i]); 
            }
            else{
                a.push_back(b[i]);
            }
        }
        
        cout<<a<<endl;
        
        
    }
}
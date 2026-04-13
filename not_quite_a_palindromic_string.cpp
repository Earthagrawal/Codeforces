#include<iostream>
#include<string>
using namespace std;

void count(string s, int *n1, int *n0){
    int n = s.length();
    for(int i = 0; i < n/2; i++){
        if(s[i] == '1' && s[n - i - 1] == '1') {
            (*n1)++;
        }
        else if(s[i] == '0' && s[n - i - 1] == '0') {
            (*n0)++;
        }
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int n1=0 , n0=0;
        count(s , &n1 , &n0);

        if(((n1 + n0) - k) % 2 == 0){
            if(n1 == n0){
                cout<<"Yes"<<endl;
            }

            else{
                int diff;
                if(n1 > n0){
                    diff = n1-n0;
                } 
                if(n1 < n0){
                    diff = n0-n1;
                }   
                if(k<diff) cout<<"No"<<endl;
                else if(k == diff) cout << "Yes"<<endl;
                else cout << "Yes"<<endl;
            }            
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
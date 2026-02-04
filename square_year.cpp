#include<iostream>
#include<string>
using namespace std;

int check(int num){
    for(int i=0; i<=num; i++ ){
        if(i*i == num){
            return i; 
        }
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int num = stoi(s);

        int r= check(num);

        if(r==-1) cout<<"-1"<<endl;
        else cout<<0 <<" "<< r << endl;
    }
}
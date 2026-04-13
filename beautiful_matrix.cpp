#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=0,j=0,n,f=0;

    vector <vector <int>> matrix ;

    for(i=0 ;i<5;i++){
        vector<int> row;
        for(j=0;j<5;j++){
            cin >> n;
            row.push_back(n);
        }
        matrix.push_back(row);
    }

    for( i=1; i<6; i++){
        for(j=1; j<6; j++){
            if(matrix[i-1][j-1]==(1)){
                f=1;
                break;
            }
        }
        if(f==1) break;
    }

    if(j==1 || j==5){
        if(i==1 || i==5){
            cout<<4;
        }
        if(i==2 || i==4){
            cout<<3;

        }
        if(i==3){
            cout<<2;
        }
    }

    if(j==2 || j==4){
        if(i==1 || i==5){
            cout<<3;
        }   
        if(i==2 || i==4){
            cout<<2;

        }
        if(i==3){
            cout<<1;
        }
    }

    if(j==3){
        if(i==1 || i==5){
            cout<<2;
        }   
        if(i==2 || i==4){
            cout<<1;

        }
        if(i==3){
            cout<<0;
        }
    }

}
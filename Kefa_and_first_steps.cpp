#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int n; cin>>n;
    while(n--){
        int j;cin>>j;
        v.push_back(j);
    }
    int count=1, max=1;
    for(int i=0; i<(v.size()-1); i++){
        if( v[i] <= v[i+1]){
            count++;
        }
        else count =1;
        if(max<count) max=count;
    }
    cout<<max;
}
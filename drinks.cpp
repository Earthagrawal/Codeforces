#include <iostream>
using namespace std;

int main(){
    int n;
    double oj=0;
    cin>>n; 
    
    for(int i=0; i<n; i++){
        double  p;
        cin>>p;
        double per = p/100;
        oj += per;
    }

    double percentage = (oj/n) * 100;
    cout<< percentage;

}
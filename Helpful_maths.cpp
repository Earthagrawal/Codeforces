#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int t,l,a;
    vector <int> nums;
    cin>>s;
    int n=s.size();

    for (int i=0; i<n ; i=i+2){
        l= (s[i] - '0');
        nums.push_back(l);
    }

    a=nums.size();
    for(int i=0; i<a; i++){
        for(int j=i+1; j<a; j++){
            if(nums[i]>nums[j]){
                t=nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }

        }
    }

    for(int j=0; j<a; j++){
        cout<<nums[j];
        if(j != (a-1)){
            cout<< '+';
        }
        
    }


}
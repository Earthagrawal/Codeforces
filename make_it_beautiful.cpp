#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 

int partition(vector <int>& v, int start, int end){
    int i=start;
    int j=end;
    int pivot = v[start];
    while(i<j){
        while( i<=end && v[i]<=pivot ){ i-=-1; }
        while( j>=start && v[j]>pivot ){ j--; }
        if (i < j)
            v[i] = v[i] + v[j] - (v[j] = v[i]); // or simply swap(v[i], v[j]);
        else
            break;

    }

    v[j] = v[start] + v[j] - (v[start] = v[j]);
    return j;
}

void quick_sort(vector <int>& v, int start, int end){
    if(start >= end) { return;  }
    else{
        int p = partition(v, start, end); 
        quick_sort( v, start, p-1);
        quick_sort( v, p+1, end);
    }
}
 
void solve(){
    int t,n; cin>>n;
    vector <int> v;

    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }
    quick_sort(v, 0,n-1);

    int index = (v.size()-1);
    if(v[0] == v[index]){
        cout<<"NO"<<endl;
    }

    else{
        cout<<"YES"<<endl;
        cout<<v[0]<<" ";
        v.erase(v.begin()+0);
        for(int i= (v.size()-1) ; i>=0; i--){
            cout<<v[i]<<" ";   
        }
        cout<<endl;
    }
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n;
    cin >> n;
    vector<int> v, d, maxx;
    deque <int> d1, d2;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        d1.push_back(temp);
        d2.push_back(temp);
        v.push_back(temp);
    }

    for (int i = 0; i < n - 1; i++)
    {
        d.push_back(abs(v[i] - v[i + 1]));
    }

    int Max = d[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            maxx.push_back(d[0]);
        }
        if (i != 0 && i != (n - 1))
        {
            maxx.push_back(d[i - 1] + d[i]);
            if ((d[i - 1] + d[i]) > Max)
                index = i;
            Max = max(Max, (d[i - 1] + d[i]));
        }
        if (i == (n - 1))
        {
            maxx.push_back(d[n - 2]);
            if (d[n - 2] > Max)
                index = i;
            Max = max(Max, d[n - 2]);
        }
    }

    for (int j = index; j < n - 1; j++)
    {
        v[j] = v[j + 1];
    }

    int total = 0;
    for (int i = 0; i < n - 2; i++)
    {
        total += abs(v[i] - v[i + 1]);
    }

    int min1=0, max2=0;
    for( int i=0; i<n; i++){
        if(d1[i]<d1[min1]){
            min1= i;
        }
        if(d2[i]>d2[max2]){
            max2= i;
        }
    }
    d1.erase(d1.begin() + min1);
    d2.erase(d2.begin() + max2);

    int total1=0, total2=0;

    for( int i=0; i<n-2; i++){
        total1 += abs(d1[i] - d1[i+1]) ;
        total2 += abs(d2[i] - d2[i+1]) ;
    }

    if((total<total1) && (total<total2))    cout<<total<<endl;
    else    (total1>total2)? (cout<<total2<<endl) : (cout<<total1<<endl);
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
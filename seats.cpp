                   #include <bits/stdc++.h>
using namespace std;
 
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;                                            
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
 
    int ans = 0, flag=0;
    for(int i =0; i<n; i++){
        if(s[i]=='1'){
            flag=1;
            break;
        } 
    }
    if(!flag){
        ans=(n+2)/3;
        cout<<ans<<endl;
        return;
    }
  
    vector<int> v(n), b;
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - 48;
    }
    
    int i=0, j=n-1;
    while(v[i]!=1){
        i++;
    }
    while(v[j]!= 1){
        j--;
    }
    j = (n-1)-j;
    
    ans = (i+1)/3 + (j+1)/3;
    j = (n-1)-j;
    
    int count = 1;
    for (i ; i <= j; i++)
    {
        if (v[i] == 1)
        {
            ans++;
            continue;
        }
        if (v[i] == v[i + 1])
        {
            count += 1;
        }
        else
        {
            b.push_back(count);
            count = 1;
        }
    }


    for (auto i : b)
    {
        ans += i/ 3;
    }
 
    cout << ans << endl;
}
 
int32_t main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
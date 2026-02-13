#include <bits/stdc++.h>
using namespace std;

#define fastio()     ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void solve()
{
    int n, t, min = INT_MAX;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t < 0)
        {
            t *= -1;
        }

        min= t^(min ^ t) & -(min < t);
    }
    cout<<min;
}

int main()
{
    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
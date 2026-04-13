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
    vector<int> v(n), prefix(n), tillx(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            prefix[i] = v[i];
            tillx[0] = v[0];
        }
        else
        {
            prefix[i] = prefix[i - 1] + v[i];
            tillx[i] = tillx[i-1] + abs(v[i]);
        }
    }

    int sum = v[0];
    int csum = v[0];

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            csum = (tillx[i - 1]) - (prefix[n - 1] - prefix[i]);
        }
        else
            csum = -(prefix[n - 1] - prefix[i]);

        sum = max(sum, csum);
       // cout << sum << " " << i << endl;
    }

    cout << sum << endl;
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
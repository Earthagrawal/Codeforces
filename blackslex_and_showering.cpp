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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += abs(v[i] - v[i + 1]);

    int ans = sum;
    ans = min({ans, ans - abs(v[0] - v[1]), ans - abs(v[n - 1] - v[n - 2])});

    for (int i = 1; i < n - 1; i++)
    {
        int x = abs(v[i - 1] - v[i]) + abs(v[i] - v[i + 1]);
        int y = abs(v[i - 1] - v[i + 1]);
        ans = min(ans, sum - x + y);
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
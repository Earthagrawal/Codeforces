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
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    int count[n + 1];
    count[0] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
        count[i] = count[i - 1] + (v[i] % 2);
    }

    while (q--)
    { // THIS GIVES TLE!!!!
        int l, r, k;
        cin >> l >> r >> k;
        int c = count[l - 1];

        if (k % 2 == 1)     c = c + (r - l + 1);
        int a = count[n] -  count[r];
        c+= a;
        cout << ((c % 2 == 0) ? ("NO") : ("YES")) << endl;
    }
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
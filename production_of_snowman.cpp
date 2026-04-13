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
    vector<int> a(n), b(n), c(n), bb, cc;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    bb = b, cc = c;
    bb.insert(bb.end(), b.begin(), b.end());
    cc.insert(cc.end(), c.begin(), c.end());

    int ab_ = 0, bc_ = 0;

    for (int s = 0; s < n; s++)
    {
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= bb[s + i])
            {
                possible = false;
                break;
            }
        }

        if (possible == true)
            (ab_)++;
    }

    for (int s = 0; s < n; s++)
    {
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            if (b[i] >= cc[s + i])
            {
                possible = false;
                break;
            }
        }

        if (possible == true)
            (bc_)++;
    }

    cout << n * ab_ * bc_ << endl;
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
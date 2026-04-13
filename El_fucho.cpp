#include <bits/stdc++.h>
using namespace std;

#define fastio()  ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    int w = n, l = 0, tw, count = 0;
    while (w > 1 || l > 1)
    {

        tw = w;
        if (w > 1)
        {
            w = ceil((double)tw / 2);
            count += (tw / 2);
        }
        if (l > 1)
        {
            count += (l / 2);
            l = ceil((double)l / 2);
        }
        l += (tw - w);
    }

    cout << count+1 << endl;
}

int main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
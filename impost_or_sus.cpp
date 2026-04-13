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
    string s;
    cin >> s;
    int count = 0;

    if (s[0] == 'u')
    {
        s[0] = 's';
        count++;
    }
    if (s[s.size() - 1] == 'u')
    {
        s[s.size() - 1] = 's';
        count++;
    }

    int ucount = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'u')
        {
            ucount++;
        }
        else
        {
            count += (ucount / 2);
            ucount=0;

        }
    }
    cout<<count<<endl;
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
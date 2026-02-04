#include <bits/stdc++.h>
using namespace std;

#define fastio()   ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    int p;
    cin >> p;
    int t;
    for (int i = 0; i < p; i++)
    {
        cin >> t;
        s.insert(t);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> t;
        s.insert(t);
    }

    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        auto t = s.find(i);
        if (t == s.end())
        {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
        cout << "Oh, my keyboard!";
    else
        cout << "I become the guy.";
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
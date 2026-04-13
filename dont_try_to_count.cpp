#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
// #define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int times = 0;

    for (int i = 0; i <= 5; i++)
    {
        int z= x.find(s)+1;
        if (z)
        {
            cout << times << endl;
            return;
        }
        times++;
        x += x;
    }
    cout<<-1<<endl;
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
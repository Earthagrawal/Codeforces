#include <bits/stdc++.h>
using namespace std;

#define fastio()   ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int t = ceil((double)c / 2);
    a = a + t;
    b = b + (c - t);

    if (a > b)
    {
        cout << "First" << endl;
    }
    else
        cout << "Second" << endl;
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
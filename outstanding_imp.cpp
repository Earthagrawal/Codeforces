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
    int size;
    cin >> size;
    vector<pair<int, int>> vec(size);
    vector<int> bits(4e5 + 1, 0);
    vector<int> check(4e5 + 1, 0);
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;
        vec[i].first = x;
        vec[i].second = y;

        if (x == y)
        {
            bits[x] = 1;
            check[x]++;
        }
    }
    string s = "";
    vector<int> pref((int)bits.size());
    int sum = 0;
    for (int i = 0; i < (int)bits.size(); i++)
    {
        sum = sum + bits[i];
        pref[i] = sum;
    }
    for (int i = 0; i < size; i++)
    {
        int left = vec[i].first;
        int right = vec[i].second;
        cout << check[left] << endl;
        if (right == left && check[right] > 1)
        {
           s= s+'0' ;  
        }
        else if (right - left + 1 == pref[right] - pref[left - 1])
        {
            s = s + '0';
        }
        else {
            s = s + '1';
        }
    }

    cout << s << endl;
    return;
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
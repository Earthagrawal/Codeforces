#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(v) v.begin(), v.end()
#define endl '\n'

void sum()
{
    int n;
    cin >> n;
    int sum = 0;
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        sum += t;
    }
    cout << (-1) * sum << endl;
}

int main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        sum();
    }
}
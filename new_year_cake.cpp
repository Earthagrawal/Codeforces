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
    int a, b;
    cin >> a >> b;

    int arr1[] = {a, b};
    int arr2[] = {b, a};
    int c1 = 0, c2 = 0;
    int x = 0;
    for (int i = 0;; i++)
    {
        x = pow(2,i);

        if (i % 2 == 1){
            if (arr1[1] >= x){
                arr1[1] -= x;
                c1++;
            }
            else
                break;
        }

        if (i % 2 == 0){
            if (arr1[0] >= x){
                arr1[0] -= x;
                c1++;
            }
            else
                break;
        }
    }

    for (int i = 0;; i++)
    {
        x = pow(2,i);
        if (i % 2 == 1)
        {
            if (arr2[1] >= x)
            {
                arr2[1] -= x;
                c2++;
            }
            else
                break;
        }

        if (i % 2 == 0)
        {
            if (arr2[0] >= x)
            {
                arr2[0] = arr2[0] - x;
                c2++;
            }
            else
                break;
        }

    }

    int c = max(c2, c1);
    cout << c << endl;
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
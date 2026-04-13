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
    int n, t, ans = 0;
    cin >> n;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    while (n--)
    {
        cin >> t;
        if (t == 1)
            c1++;
        else if (t == 2)
            c2++;
        else if (t == 3)
            c3++;
        else
            c4++;
    }


    ans += c4;
    int minn = min(c1, c3);
    ans += minn;
    c1 -= minn;
    c3 -= minn;

    if (c3)
    {
        ans += c3;
        int x = c2 / 2;
        if (x * 2 == c2)
        {
            ans += (c2 / 2);
        }
        else
        {
            ans += (c2 / 2);
            ans++;
        }
    }

    else
    {
        int x = c2 / 2;
        if (x * 2 == c2)
        {
            ans += (c2 / 2);
            if(c1%4==0){
                ans += c1/4;
            }
            else{
                ans += c1/4;
                ans++;

            }
        }
        else
        {
            ans += (c2 / 2);
            c1 -= 2;
            ans++;
            if (c1 > 0)
            {
                if(c1%4==0){
                    ans += c1/4;
                }
                else{
                    ans += c1/4;
                    ans++;
                }
            }
        }
    }

    cout << ans;
}

int32_t main()
{
    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
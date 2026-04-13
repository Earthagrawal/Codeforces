#include <bits/stdc++.h>
using namespace std;

void answer(int n, int k)
{
    int f = 0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            f = 1;
        }
    }
    if (f == 0)
    {
        cout << "Yes"<<endl;
        return;
    }
    else
    {
        if (k == 1)
        {
            cout << "No"<<endl;
            return;
        }
        else
        {
            cout << "YES"<<endl;
            return;
        }
    }
}

int main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        answer(n, k);
    }
}
#include <iostream>
#include <bits/stdc++.h >
using namespace std;

int main()
{
    vector<int> v;
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
        sum += m;
    }

    sort(v.begin(), v.end());

    int req;
    if (sum % 2 == 0)
        req = (sum / 2) + 1;
    else
        req = (sum + 1) / 2;

    int take = 0, count = 0;
    while (take < req)
    {
        take += v[n - count - 1];
        count++;
    }

    cout << count;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            count++;
        }
    }

    cout << count;
}
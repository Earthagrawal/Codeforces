#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void check()
{
    int n, f = 0;
    cin >> n;
    vector<int> v;
    int m = n;
    while (m--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int b = v.back();
    int h[b + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        h[v[i]]++;
    }
    for (int i = 0; i < (b + 1); i++)
    {
        if ((h[i] > 2) && (i != b))
        {
            h[i + 1] += h[i] - 2;
        }
        if (h[i]== 1)
        {
            f = 1;
        }
    }

    if(f==1){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
}
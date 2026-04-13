#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int f, int p, int r)
{
    int size = r + 1 - f;
    int a = f;
    int b = p + 1;
    int i = 0;
    int temp[size];

    for (i; ((a <= p) && (b <= r)); i++)
    {
        if (v[a] > v[b])
        {
            temp[i] = v[b++];
        }
        else
        {
            temp[i] = v[a++];
        }
    }

    while (a <= p)
    {
        temp[i++] = v[a++];
    }
    while (b <= r)
    {
        temp[i++] = v[b++];
    }

    for (int i = 0; i < size; i++)
    {
        v[f + i] = temp[i];
    }
}

void merge_sort(vector<int> &v, int f, int r)
{
    if (r <= f)
    {
        return;
    }

    int p = f + (r - f) / 2;
    merge_sort(v, f, p);
    merge_sort(v, 1 + p, r);
    merge(v, f, p, r);
}

void func()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }

    merge_sort(v, 0, n - 1);

    int diff=0;
    for(int i=0; i<v.size(); i=i+2){
        int d = v[i+1] - v[i];
        diff= max(diff,d);
    }
    cout<<diff<<endl;
}

int main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {

        func();
    }
}
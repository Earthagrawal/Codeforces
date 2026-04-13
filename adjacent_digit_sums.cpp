#include <iostream>
#include <vector>
using namespace std;

void check()
{
    int x, y, f = 1;
    cin >> x >> y;
    int z = x, count = 0;
    if (x % 9 == 0)
        count = x / 9;
    else
        count = (x / 9) + 1;
    for (int i = 0; i <= count; i++)
    {
        if (((y - x) == 1) || ((x - y) == i * 9 - 1))
        {
            f = 0;
            break;
        }
    }
    if (f == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
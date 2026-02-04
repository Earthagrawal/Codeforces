#include <iostream>
using namespace std;

int check(long long int a)
{
    long long int r = 0;
    while (a != 0)
    {
        r = (a % 10);
        a = a / 10;
        if (r == 7)
            return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (check(n))
        {
            cout << '0' << endl;
        }
        else
        {
            for (int i = 1; i <= 9; i++)
            {
                long long int m = 0;
                for (int j = 1; j <= 9; j++)
                {
                    m = (m * 10) + 1;
                    long long int r = check(n + (m * 9) * i);
                    if (r == 1)
                    {
                        cout << i<<endl; 
                        i = 10;
                        j = 10;
                    }
                }
            }
        }
    }
    return 0;
} 
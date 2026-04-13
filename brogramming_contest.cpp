#include <iostream>
#include <string>
using namespace std;

int count = 0;

void appent(int j, string s, string t);
void appens(int j, string t, string s);
void moves();

int main()
{
    int t;
    cin >> t;
    moves();

    cout << count;
}

void moves()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    int f = 0, j;
    for (int i = 0; i < n; i++)
    {

        if (i == '1')
        {
            f = 1;
            break;
        }
        j = i;
    }

    if (f == 1)
    {
        appent(j, s, t);
    }
}

void appens(int j, string t, string s)
{
    count++;
    for (j; j < t.size(); j++)
    {
        s += t[j];
    }

    int f = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (i == '1')
        {
            f = 1;
            break;
        }
        j = i;
    }
    if (f == 1)
    {
        appent(j, s, t);
    }
    if (f = 0)
    {
        return;
    }
}

void appent(int j, string s, string t)
{
    count++;
    for (j; j < s.size(); j++)
    {
        t += s[j];
        s.erase(j, 1);
    }
    int f = 0;
    for (int i = 0; i < t.size(); i++)
    {

        if (i == '0')
        {
            f = 1;
            break;
        }
        j = i;
    }
    if (f == 1)
    {
        appens(j, t, s);
    }
    else
        return;
}
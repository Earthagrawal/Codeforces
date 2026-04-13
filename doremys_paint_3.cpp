#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);  cin.tie(nullptr);
// #define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void distinct()
{
    unordered_map <int,int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if(m.count(t)>0){
            m[t]++;
        }
        else m[t]=1;

    }

    if (m.size() > 2)
    {
        cout << "NO"<<endl;
    }
    else if(m.size() ==1)  cout<<"YES"<<endl;
    else{
        auto a= m.begin();
        auto b = a;
        b++;

        if((((a->second) - (b->second)) ==1) || (((a->second) - (b->second)) ==0 )){
            cout<<"YES"<<endl;
        }
        else if(((b->second - a->second) ==1) || ((b->second - a->second) ==0) ){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

int main()
{
    //fastio();
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        distinct();
    }

    return 0;
}
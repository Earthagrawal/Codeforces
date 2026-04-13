#include <bits/stdc++.h>
using namespace std;

void answer(int x, int n)
{
    int temp;
    vector<int> v(n+1,0);
    for(int i=0; i<x;i++){
        cin>>temp;
        v[temp] =1;
    }
    int maxlen=0;
    int len =1;
    for(int i=1; i<=n; i++){
        if(v[i] == 0){
            len++;
        }
        else if(v[i] == 1){
            len=1;
        }
        maxlen = max(maxlen, len);
        maxlen = max(maxlen , 2*(n-temp));
    }
    cout<<maxlen<<endl;

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
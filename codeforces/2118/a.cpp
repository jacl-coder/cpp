#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

void solve()
{
    int n, k;
    cin >> n >> k;
    k = n - k;
    string s = "";

    if (k == n)
    {
        for (int i = 0; i < n; i++)
            s += "0";
    }
    else if (k == 0)
    {
        for (int i = 0; i < n; i++)
            s += "1";
    }
    else
    {
        for (int i = 0; i < n; i++)
            s += "1";
        s[n - 1] = '0';
        k--;
        for (int i = 1; i <= k; i++)
            s[i] = '0';
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
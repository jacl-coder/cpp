#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

void solve()
{
    int n;
    cin >> n;
    bool f = true;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if ((a[1] + a[n]) % (n + 1))
    {
        f = false;
    }
    else
    {
        int b = (a[1] + a[n]) / (n + 1);
        int c = (a[1] - b) / (n - 1);
        int d = a[1] - c * n;
        if (c < 0 || d < 0)
        {
            f = false;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (d * i + c * (n - i + 1) != a[i])
                {
                    f = false;
                    break;
                }
            }
        }
    }
    cout << (f ? "YES\n" : "NO\n");
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
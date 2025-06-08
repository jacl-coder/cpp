#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    vector<int> mp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = n; i >= 1; i--)
    {
        if (a[i] == b[i])
        {
            ans = i;
            break;
        }
        if (mp[b[i]])
        {
            if (mp[b[i]] >= 2 || (i < n && a[i + 1] != b[i]))
            {
                ans = i;
                break;
            }
        }
        if (mp[a[i]])
        {
            if (mp[a[i]] >= 2 || (i < n && b[i + 1] != a[i]))
            {
                ans = i;
                break;
            }
        }
        mp[a[i]]++;
        mp[b[i]]++;
    }
    cout << ans << endl;
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
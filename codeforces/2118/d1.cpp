#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 1e5 + 10;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n), d(n);
    for (ll i = 0; i < n; i++)
        cin >> p[i];
    for (ll i = 0; i < n; i++)
        cin >> d[i];
    ll e;
    cin >> e;
    while (e--)
    {
        ll l;
        cin >> l;
        ll r = 0;
        for (r; r < n; r++)
        {
            if (p[r] >= l)
                break;
        }
        vector<bool> h(n, false);
        vector<int> x(n, 0);
        ll t = 0;
        ll u = 1;
        bool w = true;
        for (r; r < n && r >= 0; r += u)
        {
            t += abs(p[r] - l);
            l = p[r];
            if (h[r] && x[r] == u && t % k == d[r])
            {
                w = false;
                break;
            }
            h[r] = true;
            x[r] = u;
            if (t % k == d[r])
            {
                u *= -1;
            }
        }
        if (w)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll N = 1e5 + 10;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        for (ll j = 0; j < 63; j++)
        {
            ll u = x >> j;
            if ((u & 1) == 0)
            {
                q.push(1ll << j);
            }
            else
            {
                ans++;
            }
        }
    }
    while (!q.empty())
    {
        ll t = q.top();
        q.pop();
        if (k >= t)
        {
            k -= t;
            ans++;
        }
        else
        {
            break;
        }
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
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

int main()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> d(l);
    d[0] = 1;
    ll p = 0;
    for (ll i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        p = (p + x) % l;
        d[p]++;
    }
    if (l % 3)
    {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0;
    for (ll i = 0; i < l; i++)
    {
        ll cnt = d[i] * d[(i + l / 3) % l] * d[(i + l / 3 * 2) % l];
        ans += cnt;
    }
    ans /= 3;
    cout << ans << endl;
    return 0;
}
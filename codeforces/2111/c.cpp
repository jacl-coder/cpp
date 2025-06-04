#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef long long ll;

const int N = 5e5 + 10;
vector<ll> a(N);

void solve()
{
    ll n;
    cin >> n;
    ll ans = 1e9 * 1e5;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0;
    while (i < n)
    {
        j = i;
        while (j < n && a[j] == a[i])
        {
            j++;
        }
        ans = min(ans, a[i] * (n - j + i));
        if (j == n)
            break;
        i = j;
    }
    ans = min(ans, a[n - 1] * i);
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
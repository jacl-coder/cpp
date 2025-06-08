#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5 + 10;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, queue<int>> pos;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]].push(i);
    }
    int ans = 1;
    int r = 0;
    for (int i = 0; i < n;)
    {
        int j = i, u = r;
        bool f = true;
        for (; j <= u; j++)
        {
            pos[a[j]].pop();
            if (!pos[a[j]].empty())
            {
                r = max(r, pos[a[j]].front());
            }
            else
            {
                f = false;
                break;
            }
        }
        if (!f)
            break;
        i = j;
        ans++;
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
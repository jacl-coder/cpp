#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector v(3, vector<set<int>>(3));
    vector<int> x(q), y(q);
    for (int i = 0; i < q; i++)
    {
        char c, d;
        cin >> c >> d;
        x[i] = int(c - 'a');
        y[i] = int(d - 'a');
        v[x[i]][y[i]].insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            if (!v[1][0].empty())
            {
                v[1][0].erase(v[1][0].begin());
                s[i] = 'a';
                continue;
            }
            if (!v[1][2].empty())
            {
                int x = int(*v[1][2].begin());
                auto it = v[2][0].lower_bound(x);
                if (it != v[2][0].end())
                {
                    s[i] = 'a';
                    v[2][0].erase(it);
                    v[1][2].erase(x);
                    continue;
                }
            }
        }
        if (s[i] == 'c')
        {
            if (!v[2][0].empty())
            {
                v[2][0].erase(v[2][0].begin());
                s[i] = 'a';
                continue;
            }
            if (!v[2][1].empty())
            {
                int x = int(*v[2][1].begin());
                auto it = v[1][0].lower_bound(x);
                if (it != v[1][0].end())
                {
                    s[i] = 'a';
                    v[2][1].erase(x);
                    v[1][0].erase(it);
                    continue;
                }
                s[i] = 'b';
                v[2][1].erase(x);
            }
        }
    }
    cout << s << '\n';
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
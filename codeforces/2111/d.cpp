#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int u = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j % 2)
                cout << a[u] << " ";
            else
                cout << a[m - 1 - u] << " ";
        }
        cout << endl;
        for (int j = 0; j < 6; j++)
        {
            if (j % 2 == 0)
                cout << a[u] << " ";
            else
                cout << a[m - 1 - u] << " ";
        }
        cout << endl;
        u++;
    }
    if (n % 2)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j % 2)
                cout << a[u] << " ";
            else
                cout << a[m - 1 - u] << " ";
        }
        cout << endl;
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
}
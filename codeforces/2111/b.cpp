#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

const int N = 15;
vector<int> a(N);

void solve()
{
    int n, m;
    cin >> n >> m;
    int L1 = a[n], L2 = a[n - 1] + a[n];
    string ans = "";
    while (m--)
    {
        int u[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> u[i];
        }
        sort(u, u + 3, greater<int>());
        if (u[0] >= L2 && u[2] >= L1)
        {
            ans += "1";
        }
        else
            ans += "0";
    }
    cout << ans << endl;
}

int main()
{
    a[1] = 1, a[2] = 2;
    for (int i = 3; i < N; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
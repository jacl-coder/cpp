#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const int N = 62;

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
        cout << i << " ";
    if (n % 2)
    {
        for (int i = n; i >= 1; i -= 2)
            cout << i << " ";
    }
    else
    {
        for (int i = n - 1; i >= 1; i -= 2)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            l = i;
            break;
        }
    }
    if (l == -1)
        cout << s << endl;
    else
    {
        int r = n - 1;
        for (int i = l + 2; i < n; i++)
        {
            if (s[i] > s[l])
            {
                r = i - 1;
                break;
            }
        }
        string ans = s.substr(0, l) + s.substr(l + 1, r - l) + s[l] + s.substr(r + 1);
        cout << ans << endl;
    }
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
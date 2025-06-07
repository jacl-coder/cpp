#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= n - i)
        {
            ans = n - i;
        }
        else
            break;
    }
    cout << ans << endl;
    return 0;
}
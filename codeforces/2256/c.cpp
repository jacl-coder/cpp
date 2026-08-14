#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef long long ll;

const ll N = 4e5 + 10;
vector<ll> a(N);

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans[2]={0,0};
    n*=2;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(s[(i+1)%n]=='1'){
                ans[(i+1)%2]++;
            }else{
                ans[i%2]++;
            }
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
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
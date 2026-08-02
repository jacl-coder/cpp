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
    ll n;
    cin>>n;
    map<ll,ll> mp;
    vector<ll> u(2*n+1,0);
    for(ll i=1;i<=2*n;i++){
        cin>>a[i];
        if(mp[a[i]]==0){
            mp[a[i]]=i;
        }else{
            u[i]=mp[a[i]];
            u[mp[a[i]]]=i;
        }
    }
    vector<ll> dp(2*n+1,0);
    for(ll i=1;i<=2*n;i++){
        if(u[i]>i) dp[u[i]] = dp[i-1] + (u[i]-i+1)*(u[i]-i+1);
        dp[i]=max(dp[i],dp[i-1]+1);
    }
    cout<<dp[2*n]<<endl;
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
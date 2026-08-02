#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

const int N = 2e5+10; 

int a[N],b[N];

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    bool f=true;
    for(int i=0;i<m;i++){
        if(a[i]>b[i]){
            f=false;
        }
    }
    for(int i=0;i<m;i++){
        if(a[n-m+i]<b[i]){
            f=false;
        }
    }
    if(n<2*m||!f) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
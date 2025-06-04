/*
1 2 3 4 5 6 7  8 9 10 11 12 13 14 15
1 1 2 3 5 7 11 13 23 27 47 55 95 
*/

#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const int N=62;

int main()
{
    ll a=0,b=0;
    vector<ll> f(N+1);
    f[0]=0;
    for(int i=1;i<=N;i++){
        ll tmp=a*2+1;
        f[i]=tmp;
        a=b;
        b=tmp;
    }
    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        for(int i=0;i<=N;i++){
            if(x<=f[i]){
                cout<<i+2<<endl;
                break;
            }
        }
    }
    return 0;
}
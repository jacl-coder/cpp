#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

const int N = 2e5+10; 

int a[N],b[N];

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int l=2,r=2;
    for(int i=0;i<n;i+=2){
        if(s[i]!='?'){
            l=1;
            for(int j=i+2;j<n;j+=2){
                if(s[j]=='?') s[j]=(s[j-2]=='0'?'1':'0');
                else{
                    if(s[j]==s[j-2]){
                        l=0;break;
                    }
                }
            }
            break;
        }
    }
    for(int i=1;i<n;i+=2){
        if(s[i]!='?'){
            r=1;
            for(int j=i+2;j<n;j+=2){
                if(s[j]=='?') s[j]=(s[j-2]=='0'?'1':'0');
                else{
                    if(s[j]==s[j-2]){
                        r=0;break;
                    }
                }
            }
            break;
        }
    }
    cout<<l*r<<endl;
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
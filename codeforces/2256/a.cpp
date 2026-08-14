#include <iostream>
#include <vector>
using namespace std;

// 1 0 0 0 0 1 0 1

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);
        cout<<min(c-a,b)<<endl;
    }
}
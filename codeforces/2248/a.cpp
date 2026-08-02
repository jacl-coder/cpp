#include <iostream>
#include <vector>
using namespace std;

// 1 0 0 0 0 1 0 1

int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin>>s;
        bool l=false,r=false;
        string ans;
        for(int i=0;i<s.size();i++){
            if(!l&&s[i]=='0'){
                l=true;
                continue;
            }
            if(!r&&s[i]=='1'){
                r=true;
                continue;
            }
            ans+=s[i];
        }
        cout<<ans<<endl;
    }
}
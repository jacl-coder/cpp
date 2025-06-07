#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string t,s;
    cin>>t>>s;
    for(int i=0;i<n;i++){
        if(t[i]=='o'&&s[i]=='o'){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
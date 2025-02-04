#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[&](int a,int b){
            return a%2==0;
        });
        int n=nums.size();
        int l=1,r=n-2;
        while(l<r){
            swap(nums[l],nums[r]);
            l+=2,r-=2;
        }
        return nums;
    }
};

int main(){
    Solution s;
    vector<int> nums={3,1,3,2,2,1,1,1,2,0,0,4,0,1,0,1,1,1,2,2};
    vector<int> res=s.sortArrayByParityII(nums);
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}
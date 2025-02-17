#include <iostream>
using namespace std;

class Solution {
public:
//1 1 2 2 4 
    int singleNumber(vector<int>& nums) { 
       sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
            cout<<nums[i]<<" "<<nums[i-1];
            if(nums[i]!=nums[i-1])
                
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};
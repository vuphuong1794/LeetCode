class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;

        int left = 0; 
        int right = nums.size()-1;
        
        while(left <= right){
            if(mymap.find(target - nums[left]) != mymap.end() && mymap[target - nums[left]] != left){
                return {left, mymap[target - nums[left]]};
            }
            mymap[nums[left]] = left;
            left++;
            if(mymap.find(target - nums[right]) != mymap.end() && mymap[target - nums[right]] != right){
                return {right, mymap[target - nums[right]]};
            }
            mymap[nums[right]] = right;
            right--;
        }
        return {};
    }
};
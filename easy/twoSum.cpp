class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;

        for(int i = 0; i< nums.size(); i++){
            mymap[nums[i]] = i;
        }
        for(int i = 0; i < nums.size();i++){
            if(mymap.find(target - nums[i]) != mymap.end() && mymap[target - nums[i]] != i){
                return {i, mymap[target - nums[i]]};
            }
        }
        return {};
    }
};
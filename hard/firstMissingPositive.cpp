class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            int n=nums.size();
            for(int i=n-1; i>=0; i--){
                if(nums[i]<=0 || nums[i]>n){
                    nums[i]=n+1;
                }
            }
            sort(nums.begin(), nums.end());
            
            int cur = 1;
            for(int i=0; i<n; i++){
                if(nums[i]==cur){
                    cur++;
                }
            }
            return cur;
        }
    };
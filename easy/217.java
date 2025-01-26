class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> newNums = new HashSet<>();
        for (int num : nums){
            if(newNums.contains(num)){
                return true;
            }
            else{
                newNums.add(num);
            }
        }
        return false;
    
    }

}
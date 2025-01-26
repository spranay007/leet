class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int numsSize = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 1 ; i < numsSize; i= i+3){
            if(nums[i] != nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[numsSize-1];
    }
};
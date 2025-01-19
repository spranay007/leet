class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int xorResult = 0;
        for(int i = 0 ; i< nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                xorResult ^= nums[i];
            }
        }
        return xorResult;
    }
};
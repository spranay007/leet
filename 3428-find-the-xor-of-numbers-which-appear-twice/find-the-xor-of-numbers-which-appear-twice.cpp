class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        //solution1:
        // sort(nums.begin(), nums.end());
        // int xorResult = 0;
        // for(int i = 0 ; i< nums.size()-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         xorResult ^= nums[i];
        //     }
        // }
        // return xorResult;
        //solution2:
        int long long seen = 0;
        int xorResult = 0;
        for(int i = 0 ; i<nums.size(); i++){
            if((seen >> nums[i])&1){
                xorResult ^= nums[i];
            }
            else{
                seen |= 1LL<<nums[i];
            }
        }
        return xorResult;
    }
};
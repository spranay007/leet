class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int trailingZeroCount = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(!(nums[i] & 1)){
                trailingZeroCount++;
            }
        }
        return trailingZeroCount >=2;
    }
};
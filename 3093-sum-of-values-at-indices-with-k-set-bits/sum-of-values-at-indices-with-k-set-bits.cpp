class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int result = 0;
        for(int i = 0 ; i< nums.size(); i++){
            if(getCount(i) == k){
                result += nums[i];
            }
        }
        return result;
    }
private:
    int getCount(int val){
        int setBits = 0;
        while(val != 0){
            if(val&1){
                setBits++;
            }
            val >>=1;
        }
        return setBits;
    }
};
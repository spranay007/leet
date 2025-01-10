class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int totalXorSum = 0;
        int count = nums.size();
        for(int mask = 0 ; mask < 1<<count ; mask++){
            //mask will denote the subsets 1: number is included in the sub set and zero means not
            int currentXor = 0;
            for(int i = 0 ; i < count ; i++){
                //i will iterate over total nums
                if(mask & 1<<i) // this means that the number is included in the current subset
                {
                    currentXor ^= nums[i];
                }
            }
            totalXorSum += currentXor;
        }
        return totalXorSum;
    }
};
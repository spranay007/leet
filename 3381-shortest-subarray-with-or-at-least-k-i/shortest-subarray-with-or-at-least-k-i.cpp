class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int minArray = INT_MAX; 
        for(int i = 0 ; i < nums.size() ; i++){
            int orResult = 0;
            for(int j = i ; j < nums.size(); j++){
                orResult |= nums[j];
                if(orResult >= k)
                    minArray = min(minArray, j-i+1);
            }
        }
        return (minArray == INT_MAX)? -1: minArray;
    }
};
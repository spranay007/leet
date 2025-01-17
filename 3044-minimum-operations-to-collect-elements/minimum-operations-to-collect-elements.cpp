class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        vector<bool> tracker(n, false);
        int counter = 0;
        for(int i = n-1; i>=0; --i){
            if(nums[i]>k || tracker[nums[i]-1]) //if the number is not what we want or its already marked found by tracker
            {
                continue;
            }
            tracker[nums[i]-1] = true; //-1 due to the fact that its zero indexed
            counter++;
            if(counter == k) {
                return n-i;
            }
        }
        return 0;
    }
};
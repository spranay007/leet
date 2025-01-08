class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int temp = 0;
        for(int i = 0 ; i < nums.size(); i++){
            // temp += nums[i]*(1 << i);
            // temp <<= 1;
            // Append the current bit and take modulo to avoid overflow
            temp = (temp << 1 | nums[i]) % 5;

            if((temp % 5) == 0){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};
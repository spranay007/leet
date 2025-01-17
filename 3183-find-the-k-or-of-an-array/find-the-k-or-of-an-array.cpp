class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int result = 0;
        for(int j = 0 ; j<32 ;j++){
            int count = 0; 
            for(int i = 0 ; i < nums.size() ; i++){
                if((nums[i] >> j) & 1){
                    count++;
                }
            }
            if(count >= k){
                result |= 1 << j;
            }
        }
        return result;
    }
};
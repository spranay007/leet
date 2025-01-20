class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int Zerocount =0;
        for(int j = 0 ; j<nums.size(); j++){
            if(nums[j]==0){
                Zerocount++;
            }
        }
        while(Zerocount != 0){
            for(int i = 0 ; i<nums.size()-1; i++){
                if(nums[i]==0){
                    nums[i] = nums[i+1];
                    nums[i+1] = 0;
                }
            }
            Zerocount--;
        }
 
    }
};
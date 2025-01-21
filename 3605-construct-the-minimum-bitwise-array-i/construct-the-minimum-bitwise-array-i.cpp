class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            bool flag = false; //set to true when answer is found
            for(int j = 30 ; j>=0 ; j--){ //check for all 31 bits
                if((nums[i] & (1<<j))!=0){ //check if the ith bit is set or not
                    int candidate = nums[i] & ~(1<<j); //unsetting the ith bit
                    if((candidate | (candidate+1))==nums[i]){//checking the required condition
                        ans.push_back(candidate);
                        flag = true;
                        break;
                    }
                }
            }
            //update ans
            if(flag == false){
            ans.push_back(-1);
            }
        }
        return ans;
    }
};
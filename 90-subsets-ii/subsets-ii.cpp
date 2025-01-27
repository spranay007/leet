class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        set<vector<int>> uniqueSubsets;
        int vSize = nums.size();
        int numberOfSubsets = 1<<vSize; //number of subsets is 2^n
        sort(nums.begin(), nums.end());
        for(int num = 0 ; num < (numberOfSubsets); num++){
            vector<int> temp;
            for(int i = 0 ; i< (vSize) ; i++){
                if(num & (1<<i)){
                    temp.push_back(nums[i]);
                }
            }
            uniqueSubsets.insert(temp);
        }
       // Convert set back to vector
        return vector<vector<int>>(uniqueSubsets.begin(), uniqueSubsets.end());
    }
};
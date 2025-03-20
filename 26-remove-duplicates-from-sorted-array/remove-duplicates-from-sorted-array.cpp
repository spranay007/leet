class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> result(nums.begin(), nums.end());
        nums.clear();
        for (int val : result) {
        nums.push_back(val);
        }
        return result.size();
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int initialSum = 0;
        int setSum = 0;
        int actualSum = 0;
        vector<int> myVector;
        set<int> unique;
        for(int i = 0; i < (nums.size()); i++)
        {
            initialSum +=nums[i];
            actualSum +=(i+1);
            unique.insert(nums[i]);
        }
        for(auto f : unique){
            setSum += f;
        }
        //repeating number
        myVector.push_back(initialSum - setSum);
        //missing number 
        myVector.push_back(actualSum - setSum);
        return myVector;
    }
};
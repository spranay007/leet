class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int size = arr.size();
        vector<int> myVec(size);

        for(int i = 0 ; i< size; i++)
        {
            myVec[i] = countBits(arr[i])*10001 + arr[i];
        }
        sort(myVec.begin(), myVec.end());
        for(int j = 0 ; j< size; j++)
        {
            myVec[j] %= 10001;
        }
        return myVec;
    }
private:
    int countBits(int num){
        int count = 0;
        while(num != 0){
            num = num&(num-1);
            count++;
        }
        return count;
    }
};
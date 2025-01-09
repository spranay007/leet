class Solution {
public:
    int xorOperation(int n, int start) {
        //vector<int> myVec(n);
        int result = 0;
        for(int i = 0; i < n ; i++){
            //myVec[i] = start + 2*i;
            //result ^= myVec[i];
            result ^= start + 2*i;
        }
        return result;
    }
};
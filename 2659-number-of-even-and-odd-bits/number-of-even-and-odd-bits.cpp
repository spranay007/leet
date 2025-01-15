class Solution {
public:
    vector<int> evenOddBit(int n) {
        int iteration = 0;
        vector<int> result = {0, 0};
        while(n!= 0){
            if(n &1){
                if(iteration%2 == 0){
                    result[0] +=1;
                }
                else{
                    result[1] +=1;
                }
            }
            iteration++;
            n >>= 1;
        }
        return result;
    }
};
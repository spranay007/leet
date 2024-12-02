class Solution {
public:
    int hammingDistance(int x, int y) {
        int tempToBeCounted = x^y;
        int result = 0;
        while(tempToBeCounted!= 0)
        {
            tempToBeCounted = tempToBeCounted & (tempToBeCounted-1);
            result ++;
        }
        return result;
    }
};
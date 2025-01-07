class Solution {
public:
    int binaryGap(int n) {
        int temp = n;
        bool firstSetFlag = 0;
        int distance, largestDistance = 0;
        int StartSetPos = 0;
        int bitPos = 0;
        while(temp!= 0){
            bitPos++;
            if(temp & 1){
                if(firstSetFlag){
                    distance = bitPos - StartSetPos;
                    firstSetFlag = 0;
                    if(largestDistance < distance){
                        largestDistance = distance;
                    }
                }
                //first set bit
                firstSetFlag = 1;
                StartSetPos = bitPos;
            }

        temp >>= 1;
        }
        return largestDistance;
    }
};
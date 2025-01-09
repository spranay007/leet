class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while(num != 0){
            if(num & 1){
                //test for odd number
                num -= 1;
                step++;
            }
            else{
                //test for even number
                num>>=1;
                step++;
            }
        }
        return step;
    }
};
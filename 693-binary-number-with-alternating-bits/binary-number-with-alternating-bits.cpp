class Solution {
public:
    bool hasAlternatingBits(int n) {
       int temp = n;
       int bitCount = 0;
       while(temp!=0){
            int bit1 = temp & 1;
            bitCount++;
            temp >>=1;
            int bit2 = temp &1;
            int test = bit1 ^ bit2;
            if(!test){
                return false;
            } 
       }
        return true;
    }
};
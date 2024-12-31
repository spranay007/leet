class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1;  // Special case: the complement of 0 is 1
        int bitlength= 0;
        unsigned int mask = 0;
        int temp = num;
        while(temp >0){
            bitlength++;
            temp = temp >> 1;
        }
        mask = (1U << bitlength) -1;
        return num ^ mask;
    }
};
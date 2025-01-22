class Solution {
public:
    int smallestNumber(int n) {
        int result = n;
        result |= (result>>1); //x = 0101 after shift 0010 and after or 0111 
        result |= (result>>2); //x = 0111 after shift 0011 and after or 0111
        result |= (result>>4); //x = 0111 after shift 0000 and after or 0111
        result |= (result>>8);
        result |= (result>>16);
        return result;
    }
};
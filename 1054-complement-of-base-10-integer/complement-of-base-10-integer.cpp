class Solution {
public:
    int bitwiseComplement(int n) {
    if (n == 0) return 1; // Special case for 0, as its complement is 1.

    int mask = 0, temp = n;

    // Create a mask with all bits set to 1 for the length of n.
    while (temp != 0) {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }

    // XOR n with the mask to get the complement.
    return n ^ mask;
    }
};
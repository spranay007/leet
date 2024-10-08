uint32_t reverseBits(uint32_t n) {
    uint32_t reversed = 0;
    int length = sizeof(n)*8;
    while (length--){
        reversed  |= (n&1);
        n = n>>1;
        if (length)               // Don't shift left on the final iteration
            reversed <<= 1;       // Shift 'reversed' to the left
    }
    return reversed;
}
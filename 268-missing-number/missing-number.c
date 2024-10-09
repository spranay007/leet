int missingNumber(int* nums, int numsSize) {
    int xorMissing = 0;
    int xorFull = 0;
    for(int i = 0 ; i< numsSize ; i++){
        xorMissing ^= nums[i];
        xorFull ^= i+1;
    }
    // xorFull ^= numsSize+1;
    return xorMissing ^ xorFull;
}
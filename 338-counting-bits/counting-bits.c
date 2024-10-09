/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n+1;
    int* result =(int*) malloc((*returnSize) * sizeof(int));
    int tempVar = n;
    for(int i = 0 ; i <= n ; i++){
        int count = 0;
        int num = i;  // Temporary variable to manipulate while counting 1's
         while (num != 0) {
            count += num & 1;  // Increment count if the last bit is 1
            num >>= 1;         // Shift right to check the next bit
        }
        result[i] = count;
    }
    return result;
}
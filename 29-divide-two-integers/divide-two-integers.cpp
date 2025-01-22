class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case (INT_MIN divided by -1)
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        // Handle case where dividend is INT_MIN and divisor is 1
        if (dividend == INT_MIN && divisor == 1) {
            return INT_MIN; // Directly return INT_MIN
        }

        // Determine the sign of the result
        bool isNegative = (dividend < 0) != (divisor < 0); // Result is negative if one of the operands is negative


        // Convert both dividend and divisor to positive values
        long long n = abs((long long)dividend); // Use long long to avoid overflow with INT_MIN
        long long d = abs((long long)divisor);  // Use long long to avoid overflow with INT_MIN

        int result = 0;
        // Perform the division using bit manipulation
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count++;
            }
            n -= d << count;
            result += 1 << count;
        }

        return isNegative ? -result : result;
    }
};

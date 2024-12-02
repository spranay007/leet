class Solution {
public:
    string toHex(int num) {
    if (num == 0) return "0";  // Special case for 0

    string hexChars = "0123456789abcdef";  // Hexadecimal characters
    string hexResult = "";
    unsigned int n = num;  // Treat as unsigned for correct two's complement behavior

    for (int i = 0; i < 8 && n > 0; ++i) {  // Process up to 8 hex digits (32 bits / 4 bits per hex)
        hexResult = hexChars[n & 0xF] + hexResult;  // Extract last 4 bits and prepend corresponding hex char
        n >>= 4;  // Right shift by 4 bits to process the next hex digit
    }

    return hexResult;
    }
};
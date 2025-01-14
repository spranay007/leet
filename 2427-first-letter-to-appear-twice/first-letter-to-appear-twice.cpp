class Solution {
public:
    char repeatedCharacter(string s) {
        int charBitmask = 0;
        for(int i = 0; i < s.length(); i++){
            int charIndex = s[i] - 'a'; // Calculate the index of the current character (0-25 for a-z)

            // Check if this character has been seen before by checking the bitmask.
            // If the corresponding bit is set, we've found a repeated character
            if ((charBitmask >> charIndex) & 1) {
                return s[i]; // Return the repeated character
            }

            // Set the bit corresponding to this character in the bitmask 
            // to mark that it has now been seen
            charBitmask |= 1 << charIndex;
        }
        return 0;
    }
};
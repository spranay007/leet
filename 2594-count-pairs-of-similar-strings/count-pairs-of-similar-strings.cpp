class Solution {
public:
    int similarPairs(vector<string>& words) {
                int similarPairsCount = 0; // Variable to store the count of similar pairs
        std::unordered_map<int, int> bitmaskFrequencyMap; // Map to store frequency of each bitmask

        for (auto& word : words) { // Iterate through each word in the vector
            int bitmask = 0; // Initialize bitmask for this word

            // Create a bitmask for the word by setting bits corresponding to characters in the word
            for (auto& character : word) {
                bitmask |= 1 << (character - 'a'); // Set the bit for this particular character
            }

            // Increment the count of similar pairs by the frequency of the current bitmask
            similarPairsCount += bitmaskFrequencyMap[bitmask];
            // Increment the frequency of the current bitmask
            bitmaskFrequencyMap[bitmask]++;
        }

        return similarPairsCount; // Return the final count of similar pairs
    }
};
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
        int totalPrintNumberBits = 0;
        // counting the numer of set bits
        for(int i = left ; i<=right ; i++)
        {
            int setBits = 0;
            int temp = i;
            while(temp!=0)
            {
                temp = temp & (temp -1);
                setBits++;
            }
            auto it = primes.find(setBits);

            if(it != primes.end()){
                totalPrintNumberBits++;
            }
        }
        return totalPrintNumberBits;
    }
};
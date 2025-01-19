class Solution {
public:
    int minChanges(int n, int k) {
        int temp = n^k;
        int count = 0;
        if((n&k)!=k){ // to handle cases which are not possible as we set 1 to 0 not vice sersa
            return -1;
        }
        while(temp > 0){
            if(temp &1){
                count++;
            }
            temp>>=1;
        }
        return count;
    }
};
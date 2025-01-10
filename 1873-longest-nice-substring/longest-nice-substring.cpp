class Solution {
public:
    string longestNiceSubstring(string s) {
       int startIndex = -1; 
       int MaxLength = 0;
       for(int i = 0 ; i < s.length(); i++){
        int lowerMask = 0;
        int upperMask = 0;
        for(int j = i ; j < s.length() ; j++){
            if(s[j]<97) //upper case
                upperMask |= (1<<(s[j] - 'A'));
            else
                lowerMask |= (1<<(s[j] - 'a'));
            if((upperMask == lowerMask) && MaxLength < j-i+1){
                MaxLength = j-i+1;
                startIndex = i;
            }
        }
       }
       return startIndex == -1 ? "" : s.substr(startIndex, MaxLength); 
    }
};
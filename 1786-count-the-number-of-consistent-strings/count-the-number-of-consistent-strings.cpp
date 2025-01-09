class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int maskAllowed = 0;
        int count = 0;
        for(int i = 0 ; i< allowed.size(); i++){
            maskAllowed |= 1<<(allowed[i]-'a');
        }
        for(int j = 0 ; j<words.size(); j++){
            string temp = words[j];
            int tempMask= 0;
            for(int k = 0 ; k< temp.size() ; k++){   
                tempMask |= 1<<(temp[k]-'a');
            }
            if((tempMask & maskAllowed) == tempMask){
                count++;
            }
        }
        return count;
    }
};
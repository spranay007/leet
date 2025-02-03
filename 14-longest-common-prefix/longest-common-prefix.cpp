class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result; 
        int totalStringCount = strs.size();
        for(int i = 0 ; i < strs[0].size() ; i++){//iterate through the first string
            for(int j = 1 ; j < totalStringCount ; j++){ //compare the first char with that of the other strings
                if(i >= strs[j].size()||strs[0][i] != strs[j][i]){
                    return result;
                }
            }
            result += strs[0][i];
        }
        return result;
    }
};
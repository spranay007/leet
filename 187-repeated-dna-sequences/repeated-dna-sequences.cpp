class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        //using an unordered map
        unordered_map<string, int> seqCount;
        int possibleStarts = s.size()-9;
        vector<string> repeats;
        for(int i =0 ; i <possibleStarts; i++){
            string subseq = s.substr(i,10);
            //now we check this seq and increment the counter, and if we see it again we add to repeats
            if(++seqCount[subseq] == 2){
                repeats.push_back(subseq);
            }
        }
        return repeats;
    }
};
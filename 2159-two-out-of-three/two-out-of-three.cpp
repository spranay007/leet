class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    set<int> set1(nums1.begin(), nums1.end());
    set<int> set2(nums2.begin(), nums2.end());
    set<int> set3(nums3.begin(), nums3.end());
    set<int> result;

    for (int num : set1){
        if (set2.count(num) || set3.count(num)) {
                result.insert(num); // If the number is in at least two arrays
            }
        }
    
    for (int num : set2){
        if (set1.count(num) || set3.count(num)) {
                result.insert(num); // If the number is in at least two arrays
            }
        }
    
    for (int num : set3){
        if (set2.count(num) || set1.count(num)) {
                result.insert(num); // If the number is in at least two arrays
            }
        }
    
    vector<int> resultVec(result.begin(), result.end());
        return resultVec;
    }
};
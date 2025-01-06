class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0 ; i < image.size() ; i++){
            //reversing the array
            reverse(image[i].begin(), image[i].end());
            //flipping the bits
            for(int j = 0 ; j< image.size(); j++)
            {
                image[i][j] ^= 1;
            }
        }
        return image;
    }
};
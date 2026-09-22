class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            reverse(image[i].begin(), image[i].end());

        }

        for (int j = 0; j < image.size(); j++) {
            for (int k = 0; k < image[j].size(); k++) {
                if (image[j][k] == 0) {
                    image[j][k] = 1;
                }
                else if (image[j][k] == 1) {
                    image[j][k] = 0;
                }
                else {
                    continue;
                }
            }
        }
        return image;
    }
};
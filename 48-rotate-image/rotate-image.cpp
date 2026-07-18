class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> rotated = {};
        for (int n = matrix.size(), j = 0; j < n; j++) {
            vector<int> temp = {};
            for (int i = n-1; i >= 0; i--) {
                temp.push_back(matrix[i][j]);
            }
            rotated.push_back(temp);
        }
        matrix = rotated;
    }
};
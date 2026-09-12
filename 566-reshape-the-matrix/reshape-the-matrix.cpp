class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> one_line = {};
        int count = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                one_line.push_back(mat[i][j]);
                count++;
            }
        }
        if (count/r != c && count/c != r) {
            return mat;
        }
        vector<vector<int>> container = {};
        int l = 0;
        for (int j = 0; j < r; j++) {
            vector<int> temp = {};
            for (int k = 0; k < c; k++) {
                temp.push_back(one_line[l]);
                l++;
            }
            container.push_back(temp);
        }
        return container;
    }
};
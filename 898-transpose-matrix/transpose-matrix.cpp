class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> output = {};
        for (int i = 0; i < m; i++) {
            vector<int> row = {};
            output.push_back(row);
            for (int j = 0; j < n; j++) {
                output[i].push_back(matrix[j][i]);
            }
        }
        return output;
    }
};
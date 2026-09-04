class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0, m = matrix.size(); i < m; i++) {
            if (matrix[i][0] > target) {
                break;
            }
            for (int j = 0,n = matrix[0].size(); j < n; j++) {
                if (matrix[i][j] > target) {
                    break;
                }
                if (target == matrix[i][j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
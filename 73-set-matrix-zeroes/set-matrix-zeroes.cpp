class Solution {
public:
    void set_zeros(vector<vector<int>> &mat, int m, int n) {
        for (int j = 0; j < mat[0].size(); j++) {
            if (mat[m][j] != 0) {
                mat[m][j] = 500;
            }
        }
        for (int i = 0; i < mat.size(); i++) {
            if (mat[i][n] != 0){
                mat[i][n] = 500;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        // vector<vector<int>> flag(matrix.size(), vector<int>(matrix[0].size(), 1));
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    set_zeros(matrix, i, j);
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 500) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
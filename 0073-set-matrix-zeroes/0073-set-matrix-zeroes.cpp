class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<pair<int, int>> zero;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zero.push_back({i, j});
                }
            }
        }

        int numofzero = zero.size();

        for (int k = 0; k < numofzero; k++) {
            int i=zero[k].first,j=zero[k].second;
           
                // coloumn zero set
                for (int temp = 0; temp < rows; temp++) {
                    matrix[temp][j] = 0;
                }
                // row set zero
                for (int temp2 = 0; temp2 < cols; temp2++) {
                    matrix[i][temp2] = 0;
                }
            
        }
    }
}
;
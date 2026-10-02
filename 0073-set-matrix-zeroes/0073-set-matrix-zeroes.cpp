class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        set<int> rowset;
        set<int> colset;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    rowset.insert(i);
                    colset.insert(j);
                }
            }
        }

       

        // setting rows zero
        for(auto it = rowset.begin();it != rowset.end();it++){
            int val = *it;
            for(int i =0;i<cols;i++)
            {
                matrix[val][i]=0;
                // cout << "123\n";
            }
        }

        // setting coloumn zero
        for(auto it = colset.begin();it != colset.end();it++){
            int val = *it;
            for(int i =0;i<rows;i++)
            {
                // cout << "123\n";
                matrix[i][val]=0;
            }
        }
        
    }
}
;
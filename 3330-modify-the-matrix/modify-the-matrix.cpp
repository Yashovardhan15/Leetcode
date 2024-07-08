class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int j = 0; j<m; j++){
            int curmax=0;
            for(int i=0; i<n; i++) curmax = max(curmax, matrix[i][j]);
            for(int i=0; i<n; i++){
                if(matrix[i][j] < 0){
                    matrix[i][j] = curmax;
                }
            }
        }
        return matrix;
    }
};
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> B(m, vector<int>(n,0));

        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                B[j][i] = matrix[i][j];
            }
        }
        return B;


    }
};
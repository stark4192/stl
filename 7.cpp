class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, m = matrix.size(), n = matrix[0].size();
        while (i < m) {
            if (target >= matrix[i][0] && target <= matrix[i][n - 1]) 
                break;
            i++;
        }
        if (i == m)    return false;
        return binary_search(matrix[i].begin(), matrix[i].end(), target);
    }
};
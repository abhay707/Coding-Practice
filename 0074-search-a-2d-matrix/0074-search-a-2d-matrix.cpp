class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int low = 0, high = row * col - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int midValue = matrix[mid / col][mid % col];

            if (midValue == target) {
                return true;
            } else if (midValue < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};
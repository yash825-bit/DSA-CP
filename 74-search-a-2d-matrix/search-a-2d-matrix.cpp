class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        short left = 0, right = matrix.size()*matrix[0].size()-1;

        while(left <= right) {
            short mid = left + (right-left)/2;
            int val = matrix[(int)mid/matrix[0].size()][mid%matrix[0].size()];
            if(val == target)return true;
            else if(val < target){left = mid+1;}
            else {right = mid-1;}
        }
        return false;
    }
};
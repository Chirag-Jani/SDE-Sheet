class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // int m = matrix.size(), n = matrix[0].size();
        // bool flag = 0;

        // for(int i = 0; i < m; i++){
        //     for(int j = 0; j < n; j++){
        //         if(matrix[i][j] == target){
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if(flag) break;
        // }
        // return flag;

        int lo = 0;
        if (!matrix.size())
            return false;
        int hi = (matrix.size() * matrix[0].size()) - 1;

        while (lo <= hi)
        {
            int mid = (lo + (hi - lo) / 2);
            if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] == target)
            {
                return true;
            }
            if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return false;
    }
};
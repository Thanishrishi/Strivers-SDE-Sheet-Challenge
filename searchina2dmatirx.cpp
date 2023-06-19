bool binsearch(int row, int col, vector<vector<int>> &mat, int target)
{
    int low = 0, high = col - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mat[row][mid] == target)
            return true;
        else if (mat[row][mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size(), n = mat[0].size();
    for (int i = 0; i < m; i++)
    {
        if (binsearch(i, n, mat, target))
            return true;
    }
    return false;
}
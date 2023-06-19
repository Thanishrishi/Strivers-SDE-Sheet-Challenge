#include <bits/stdc++.h>

void makeitzero(int row, int col, vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    for (int i = 0; i < n; i++)
        matrix[row][i] = 0;
    for (int i = 0; i < m; i++)
        matrix[i][col] = 0;
}
void setZeros(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    vector<pair<int, int>> zeros;
    for (int i = 0; i < m; i++)
    {
        for (int z = 0; z < n; z++)
        {
            if (matrix[i][z] == 0)
                zeros.push_back({i, z});
        }
    }
    int size = zeros.size();
    for (int i = 0; i < size; i++)
    {
        makeitzero(zeros[i].first, zeros[i].second, matrix);
    }
}
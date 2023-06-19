

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    int end = intervals[0][1];
    int start = intervals[0][0];
    int size = intervals.size();
    for (int i = 1; i < size; i++)
    {
        if (intervals[i][0] <= end)
        {
            if (end < intervals[i][1])
                end = intervals[i][1];
        }
        else
        {
            ans.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    ans.push_back({start, end});
    return ans;
}

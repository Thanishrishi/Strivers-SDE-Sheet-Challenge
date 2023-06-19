#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 2)
        {
            ans1 = i;
        }
        else if (mp[i] == 0)
        {
            ans2 = i;
        }
    }
    return {ans2, ans1};
}

#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long ans = 0;
    long long res = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
        res = max(ans, res);
        if (ans < 0)
            ans = 0;
    }
    return res < 0 ? 0 : res;
}
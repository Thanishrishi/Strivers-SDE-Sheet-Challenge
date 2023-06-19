#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{
    int size = floor(n / 2);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] > size)
            return arr[i];
    }
    return -1;
}
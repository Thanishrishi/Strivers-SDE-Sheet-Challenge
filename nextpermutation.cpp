#include <bits/stdc++.h>
#include <vector>

vector<int> nextPermutation(vector<int> &p, int n)
{
    int size = p.size(), dup = -1;
    for (int i = size - 2; i >= 0; i--)
    {
        if (p[i] < p[i + 1])
        {
            dup = i;
            break;
        }
    }
    if (dup == -1)
    {
        reverse(p.begin(), p.end());
        return p;
    }
    else
    {
        for (int z = size - 1; z >= 0; z--)
        {
            if (p[z] > p[dup])
            {
                swap(p[z], p[dup]);
                break;
            }
        }
        sort(p.begin() + dup + 1, p.end());
    }
    return p;
}
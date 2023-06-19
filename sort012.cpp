#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int zc = 0, oc = 0, tc = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zc++;
        else if (arr[i] == 1)
            oc++;
        else
            tc++;
    }
    int start = 0;
    while (zc--)
        arr[start++] = 0;
    while (oc--)
        arr[start++] = 1;
    while (tc--)
        arr[start++] = 2;
}
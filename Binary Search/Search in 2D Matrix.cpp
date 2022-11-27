#include <bits/stdc++.h> 
bool findInMatrix(int x, vector<vector<int>> &arr)
{
    //    Write your code here.
    int i=0;
    int n=arr.size();
    int j=arr[0].size()-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==x)
        {
            return true;
        }
        if(arr[i][j]<x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}

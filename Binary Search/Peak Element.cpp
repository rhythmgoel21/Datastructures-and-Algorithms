#include <bits/stdc++.h> 
int findPeak(vector<int> &arr) {
    // Write your code here
    int s=0;
    int e=arr.size()-1;
    int mid;
    while(s<e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return arr[s];
}

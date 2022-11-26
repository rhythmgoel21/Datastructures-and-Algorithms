#include <bits/stdc++.h> 
int getpivot(vector<int>arr,int n)
{
    int s=0,e=n-1,mid;
    while(s<e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}
int search(int s,int e,vector<int>& nums, int target) {
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                e=mid-1;
            }
            if(nums[mid]<target)
            {
                s=mid+1;
            }
        }
        return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    // 1. pivot element 
    int pivot=getpivot(arr,n);
    int ans;
  // search in second line
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        ans=search(pivot,n-1,arr,k);
    }
  // serach in first line 
    else 
    {
        ans=search(0,pivot-1,arr,k);
    }
    return ans;
}


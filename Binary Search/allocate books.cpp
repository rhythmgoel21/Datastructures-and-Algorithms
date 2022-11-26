#include <bits/stdc++.h> 
bool ispossible(vector<int>&arr,int n,int mid,int m)
{
    int count=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ans+arr[i]<=mid)
    {
        ans+=arr[i];
    }
    else
    {
        count++;
        if(count>m || arr[i]>mid)
        {
            return false;
        }
        ans=arr[i];
    }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(ispossible(arr,n,mid,m))
        {
            ans=mid;
            e=mid-1; // we require minimum
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

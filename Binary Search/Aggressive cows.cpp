#include<bits/stdc++.h>
bool ispossible(vector<int>&stalls,int k,int mid)
{
    int count=1;
    int lpos=stalls[0];
    int ans=-1;
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lpos>=mid)
        {
            count++;
            if(count==k)
            {
                return true;
            }
            lpos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int s=0;
    int maxi=-1;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
            maxi=max(stalls[i],maxi);
    }
    int e=maxi;
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(ispossible(stalls,k,mid))
        {
            ans=mid;
            s=mid+1;// because we need to find maximum distance
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

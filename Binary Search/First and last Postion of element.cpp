#include <bits/stdc++.h> 
int firstpos(vector<int>&arr,int n,int k)
{
    int s=0,e=n-1,mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        if(arr[mid]<k)
        {
            s=mid+1;
        }
        if(arr[mid]>k)
        {
            e=mid-1;
        }
    }
    return ans;
}
int lastpos(vector<int>&arr,int n,int k)
{
    int s=0,e=n-1,mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]<k)
        {
            s=mid+1;
        }
        if(arr[mid]>k)
        {
            e=mid-1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first=firstpos(arr,n,k);
    p.second=lastpos(arr,n,k);
    return p;
}
// Total Occurences of an element 
int countOccurences(int arr[], int n, int X)
{
	//Write your code here
    int ans;
    int first=firstpos(arr,n,X);
    int last=lastpos(arr,n,X);
   if(first==-1)
   {
       return 0;
   }
    else
    {
        return (last-first+1);
    }
}

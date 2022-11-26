#include <bits/stdc++.h> 
int squareRoot(int a)
{
	// Write your code here.
    int s=0;
    int e=a;
    long long int mid;
    long long int sq;
    long long int ans=-1;
    while(s<=e)
    {
      mid=s+(e-s)/2;
      sq=mid*mid;
        if(sq==a)
        {
            return mid;
        }
       if(sq>a)
       {
           e=mid-1;
       }
        if(sq<a)
        {
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}

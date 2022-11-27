string balancedSums(vector<int> arr) {
int sum=0;
for(int i=0;i<arr.size();i++)
{
    sum+=arr[i];
}
int x=0;
for(int i=0;i<arr.size();i++)
{
    if(2*x==sum-arr[i])
    {
        return "YES";
    }
    x+=arr[i];
}
return "NO";
}

//example 
// 5 6 8 11 
// o/p : YES 
// 5+6=11 AND 11 LEFT AND RIGHT SIDE OF 8 

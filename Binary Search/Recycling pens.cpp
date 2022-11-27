
bool ispossible(int n, int r, int k,long long int c,long long int barrier){
    
    long long int totalmoney=(long long int)r+(long long int)((n-barrier)*k);
    long long int pro=(long long int)(totalmoney/c);
    if(pro<(barrier)){
 
            return false;
        
    }else{
        
        return true;
        
    }
    
}
int recyclePens(int n, int r, int k, int c ){

	// Write your code here.
	int lo=0;
    int hi=n;
    int ans=-1;
    while (lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(ispossible(n,r,k,c,mid))
        {
            ans=mid;
            lo=mid+1; // maximum number of pens
        }
        else
        {
            hi=mid-1;
        }
    }
        return ans;
}

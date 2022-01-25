int minDifference(int arr[], int n)  { 
	    int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
int dp[n+1][sum+1];
int ans=sum;
for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
        if(j==0)
        dp[i][j]=1;
        else
        dp[i][j]=0;
	        
	    }
    
}
    
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=sum;j++){
	        
	      
	        if(j>=arr[i-1]){
	            dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
	        }
	        else{
	            dp[i][j]=dp[i-1][j];
	        }
	        if(i==(n)&&dp[i][j]==1){
	       if(j<=((sum+1)/2))
	            ans=min(ans,abs(sum-2*j));
	    }
	        
	    }
	    
	    }
	return ans;
	} 
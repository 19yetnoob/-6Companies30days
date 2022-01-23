int FindMaxSum(int arr[], int n)
    {
        int dp[n];
        dp[0]=arr[0];
        dp[1]=arr[1];
        int max1=0;
        int max2=0;
        for(int i=2;i<n;i++){
            max1=max(max1,dp[i-2]);
            dp[i]=arr[i]+max1;
        }
        return max(dp[n-1],dp[n-2]);
    }
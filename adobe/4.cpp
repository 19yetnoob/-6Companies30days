int equalPartition(int N, int arr[])
    {
        int t=0;
        for(int i=0;i<N;i++)
        t+=arr[i];
        if(t%2!=0)
        return 0;
        int dp[N+1][t+1];
         for(int i=0;i<=N;i++){
            for(int j=0;j<=t;j++){
                if(j==0)
                dp[i][j]=1;
                else
                dp[i][j]=0;
            }
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=t;j++){
                if(dp[i-1][j]==1)
                dp[i][j]=1;
                if(j>=arr[i-1])
                {
                    if(dp[i-1][j-arr[i-1]]==1)
                    dp[i][j]=1;
                    if(j==arr[i-1])
                   // if(dp[i][j-arr[i]]==1)
                    dp[i][j]=1;
                }
            }
        }
        // for(int i=0;i<=N;i++){
        //     for(int j=0;j<=t;j++){
        //         cout<<dp[i][j]<<' ';
        //     }
        //     cout<<endl;
        // }
        for(int i=1;i<=N;i++){
            if(dp[i][t/2]==1)
            return 1;
        }
        return 0;
    }
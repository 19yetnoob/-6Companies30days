class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
         vector<vector<int>>dp(K+1,vector<int>(N+1,0));
         vector<int>pref(N,0);
         for(int i=0;i<N;i++)
         pref[i]=-1*A[i];
         for(int i=1;i<N;i++)
         {
             pref[i]=max(pref[i-1],pref[i]);
         }
         for(int i=1;i<=K;i++)
         {
             for(int j=1;j<=N;j++)
             {
                 dp[i][j]=max(dp[i][j-1],A[j-1]+pref[j-1]);
                 pref[j-1]=dp[i][j-1]-A[j-1];
             }
             for(int j=1;j<N;j++)
             {
             pref[j]=max(pref[j-1],pref[j]);
             }
             
         }
         return  dp[K][N];
    }
};

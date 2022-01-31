int dp[1001][1001];
int solve(vector<int>& A,int i,int j)
{
   if(i==j)
   {
       return A[i];
   }
   if(i>j)
   {
       return 0;
   }
   if(dp[i][j]!=-1)
   {
       return dp[i][j];
   }
   
   int left = A[i] + min(solve(A,i+2,j),solve(A,i+1,j-1));
   int right = A[j] + min(solve(A,i,j-2),solve(A,i+1,j-1));
   
   return dp[i][j] = max(left,right);
}
   int maxCoins(vector<int>&A,int n)
   {
    memset(dp,-1,sizeof(dp));
     return solve(A,0,n-1);
    
    
   }

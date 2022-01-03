class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int ans=0;
        int prev=0;
        long long curr=1;
        for(int i=0;i<n;i++)
        {
            curr*=a[i];
           
                while(curr>=k)
                {
                    curr/=a[prev];
                    prev++;
                }
            ans+=(i-prev+1);
        }
        return ans;
        
    }
};

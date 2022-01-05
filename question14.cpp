class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
      int prev=0;
        vector<int>pre(nums.size());
        pre[0]=nums[0];
        int ans=INT_MAX;
        for(int i=1;i<nums.size();i++)
            pre[i]=nums[i]+pre[i-1];
        for(int i=0;i<nums.size();i++)
        {
             
            if(pre[i]>=k)
            {
                while((pre[i]-pre[prev])>=k)
                    prev++;
                ans=min(ans,i-prev+1);
                
            }
        }
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};

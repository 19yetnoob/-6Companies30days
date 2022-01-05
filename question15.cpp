bool canPair(vector<int> nums, int k) {
        int n=nums.size();
       for(int i=0;i<n;i++)
       {
           nums[i]=nums[i]%k;
       }
       map<int,int>m;
       for(auto a:nums)
       m[a]++;
       for(auto b:m)
       {
           if(b.first==0)
           {
               if(b.second%2!=0)
               return false;
           }
           else
           {
               if(m[k-b.first]!=m[b.first])
               return false;
           }
       }
       return true;
    }

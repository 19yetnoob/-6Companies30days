 int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=1e9;
        int ans=INT_MAX;
        while(l<=r){
            int mid=(l+r)/2;
            int cnt=0;
            for(auto a:piles){
                cnt+=ceil(a*1.0/mid);
            }
            if(cnt>h){
                l=mid+1;
            }
            else{
                ans=min(ans,mid);
                r=mid-1;
            }
        }
        return ans;
    }
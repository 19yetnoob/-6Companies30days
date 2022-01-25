 int shipWithinDays(vector<int>& weights, int days) {
        int l=0;
        int r=1000000;
        int ans=INT_MAX;
        while(l<=r){
            int d=0;
            int s=0;
            int cnt=0;
            
            int mid=(l+r)/2;
            for(int i=0;i<weights.size();i++){
                s+=weights[i];
                if(weights[i]>mid){
                    l=mid+1;
                    cnt=1;
                    break;
                    
                }
                if(s>mid){
                    s=weights[i];
                    d++;
                }
            }
            d++;
            if(d<=days&&cnt==0)
                ans=min(ans,mid);
            if(cnt==0){
            if(d>days)
                l=mid+1;
            else
                r=mid-1;
                }
                
                
        }
        return ans;
    }
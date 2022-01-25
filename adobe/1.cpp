vector<int> subarraySum(int arr[], int n, long long s)
    {
        int l=0;
        long long curr=0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            while(curr>s){
                curr-=arr[l];
                l++;
            }
            if(curr==s)
            return {l+1,i+1};
        }
        if(curr==s)
        return {l+1,n};
        else
        return {-1};
    }
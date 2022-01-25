vector<int> leaders(int a[], int n){
        int ma=a[n-1];
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=ma)
            {
                ans.push_back(a[i]);
                ma=max(ma,a[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
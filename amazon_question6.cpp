 vector<int> max_of_subarrays(int *arr, int n, int k) {
        // your code here
        deque<pair<int,int>>q;
        vector<int>ans;
        q.push_front({arr[0],0});
        k--;
        for(int i=0;i<n;i++)
        {
            if((arr[i]>(q.front()).first))
            {
                q.clear();
                q.push_front({arr[i],i});
            }
            else
            {
                while((q.back()).first<arr[i])
                    q.pop_back();
                q.push_back({arr[i],i});
            }
            if(i>=k)
            {
                while((q.front()).second<(i-k))
                q.pop_front();
                ans.push_back((q.front()).first);
            }
        }
        return ans;
    }

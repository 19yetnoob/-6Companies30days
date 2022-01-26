    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>v(n,-1);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]==1)
                continue;
            cnt++;
            queue<int>q;
            q.push(i);
            while(!q.empty()){
                int top=q.front();
                v[top]=1;
                q.pop();
            for(int j=0;j<n;j++){
                if(isConnected[top][j]==1&&v[j]!=1)
                    q.push(j);
            }
            }
            
        }
        return cnt;
    }
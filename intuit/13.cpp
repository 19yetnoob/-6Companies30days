class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int ans =0;
        int n=grid.size();
        map<int,int>m;
        for(int i=0;i<grid.size();i++){
            int cnt=0;
            for(int j=grid.size()-1;j>=0;j--){
                if(grid[i][j]==0)
                    cnt++;
                else
                    break;
            }
            if(cnt==n)
                cnt=n-1;
            m[i]=cnt;
        }
        // for(auto a:m)
        //         cout<<a.first<<" "<<a.second<<" ";
        //     cout<<endl;
        int idx=0;
        for(int i=grid.size()-1;i>0;i--){
            int dis=INT_MAX;
            for(auto a:m){
                if(a.second>=i&&a.first>=idx)
                    dis=min(dis,a.first);
            }
            if(dis==INT_MAX)
                return -1;
           //// cout<<dis<<" "<<i<<endl;
            int save=m[dis];
            ans+=(dis-idx);
            for(int j=dis;j>idx;j--)
            {
               // cout<<"ff"<<endl;
                m[j]=m[j-1];
            }
            m[idx]=save;
            // for(auto a:m)
            //     cout<<a.first<<" "<<a.second<<" ";
            // cout<<endl;
            idx++;
            
        }
        return ans;
    }
};
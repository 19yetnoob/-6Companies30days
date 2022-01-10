class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans[grid.size()][grid[0].size()];
        for(int i=0;i<grid.size();i++)
        {
          for(int j=0;j<grid[0].size();j++)
              ans[i][j]=0;
        }
        for(int i=0;i<grid.size();i++)
        {
          for(int j=0;j<grid[0].size();j++)
          {
              if(grid[i][j]==0||grid[i][j]==2)
                  ans[i][j]=INT_MIN;
              else
                  ans[i][j]=INT_MAX;
          }
        }
        for(int i=0;i<grid.size();i++)
        {
          for(int j=0;j<grid[0].size();j++)
          {
              if(grid[i][j]==2)
              {
                  queue<pair<int,int>>q;
                  q.push({i,j});
                  int s=1;
                  vector<vector<int>>visit(grid.size(),vector<int>(grid[0].size(),-1));
                  while(!q.empty()){
                      
                      int l=q.size();
                    //  cout<<l<<endl;
                      for(int k=0;k<l;k++)
                      {
                         auto top=q.front();
                          q.pop();
                          visit[top.first][top.second]=1;

                         // cout<<top.first<<" "<<top.second<<endl;
                         if(top.first+1<grid.size())
                         {
                             if(grid[top.first+1][top.second]==1&&visit[top.first+1][top.second]==-1){
                                 q.push({top.first+1,top.second});
                             ans[top.first+1][top.second]=min(ans[top.first+1][top.second],s);}
                             
                         }
                          if(top.first>0){
                              if(grid[top.first-1][top.second]==1&&visit[top.first-1][top.second]==-1){
                                 q.push({top.first-1,top.second});
                                   ans[top.first-1][top.second]=min(ans[top.first-1][top.second],s);}
                              
                          }
                      
                      if(top.second+1<grid[0].size())
                         {
                             if(grid[top.first][top.second+1]==1&&visit[top.first][top.second+1]==-1){
                                 q.push({top.first,top.second+1});
                                  ans[top.first][top.second+1]=min(ans[top.first][top.second+1],s);}
                             }
                             
                          if(top.second>0){
                              if(grid[top.first][top.second-1]==1&&visit[top.first][top.second-1]==-1){
                                 q.push({top.first,top.second-1});
                                   ans[top.first][top.second-1]=min(ans[top.first][top.second-1],s);
                              }
                          }
                          
                      }
                      s++;
                      
                  }
              }
          }
    }
        int res=0;
        for(int i=0;i<grid.size();i++)
        {
          for(int j=0;j<grid[0].size();j++)
          {
              if(ans[i][j]==INT_MAX)
                  return -1;
              res=max(res,ans[i][j]);
          }
            
        }
        return res;
    }
};

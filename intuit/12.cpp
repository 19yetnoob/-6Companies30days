// class Solution {
// public:
//     void dfs(vector<vector<int>>adj,int node,int par,vector<int>done,vector<int>visit,int &c,vector<int>&curr){
//          visit[node]=1;
//         for(auto a:adj[node]){
//             if(c!=0)
//                 break;
//             if(visit[a]==-1){
//                 if(done[a]==1)
//                 {
//                     c=1;
//                     visit[a]=1;
//                     break;
//                 }
//                 else
//                 {
//                    dfs(adj,a,node,done,visit,c,curr); 
//                 }
//             }
//                 else
//                 {
//                     if(a!=par)
//                     {
//                         c=-1;
//                         break;
//                     }
//                 }
//             }
        
//         if(c==1){
//             done[node]=1;curr.push_back(node);}
//     }
//     vector<int> findOrder(int n, vector<vector<int>>& p) {
//         vector<vector<int>>adj(n);
//         for(auto a:p){
//             adj[a[0]].push_back(a[1]);
//         }
//         vector<int>ans;
        
//         vector<int>done(n,-1);
//         vector<int>visit(n,-1);
//         for(int i=0;i<n;i++)
//             if(adj[i].size()==0)
//                 done[i]=1;
//         for(int i=0;i<n;i++){
//            // vector<int>visit(n,-1);
//             if(visit[i]!=1){
//                 vector<int>curr;
//                 int c=0;
//                 dfs(adj,i,-1,done,visit,c,curr);
//                 if(c==-1)
//                     return {};
//                 for(auto a:curr)
//                     ans.push_back(a);
//             }
//         }
//         return ans;
//     }
// };
class Solution
{
public:
    bool topoSort(vector<int> adj[], int V, vector<int> &res)
    {
        vector<int> indegree(V, 0);
        // count indegree of every vertex
        for (int i = 0; i < V; i++)
        {
            for (auto u : adj[i])
            {
                indegree[u]++;
            }
        }
        queue<int> q;
        // push vertices having indegrees 0
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto v : adj[u])
            {
                //  reducing its indegree by 1
                indegree[v]--;
                // if indegree = 0 then push it to queue
                if (indegree[v] == 0)
                    q.push(v);
            }
            res.emplace_back(u);
        }
        return res.size() != V;
    }
    vector<int> findOrder(int n, vector<vector<int>> &pre)
    {
        vector<int> adj[n];
        int count = 0;
        for (int i = 0; i < pre.size(); i++)
        {
            int u = pre[i][0];
            int v = pre[i][1];
            adj[v].push_back(u);
        }
        vector<int> res;
        if (topoSort(adj, n, res))
        {
            res.clear();
        }
        return res;
    }
};
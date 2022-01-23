void dfs(int node,set<int>s[],vector<int>&visit,string &ans){
        visit[node]=1;
        for(auto a:s[node]){
            if(visit[a]==-1)
            dfs(a,s,visit,ans);
        }
        ans=(char)('a'+node)+ans;
    }
    string findOrder(string dict[], int N, int K) {
       set<int>v[26];
       for(int i=0;i<N-1;i++){
           string a=dict[i];
           string b=dict[i+1];
           int m=min(a.size(),b.size());
           for(int j=0;j<m;j++){
               if(a[j]!=b[j])
               {
                   v[a[j]-'a'].insert(b[j]-'a');
                   break;
               }
           }
       }
       string ans="";
       vector<int>visit(26,-1);
       for(int i=0;i<26;i++){
           if(visit[i]==-1&&v[i].size()>0){
               dfs(i,v,visit,ans);
           }
       }
       return ans;
    }
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        unordered_map<int,int>m;
        vector<int>v(n,-1);
        for(int i=0;i<n;i++){
             
            for(int j=0;j<n;j++){
                if(i==j)
                    continue;
                auto a =points[j];
                auto b =points[i];
         m[(abs(a[0]-b[0])*abs(a[0]-b[0]))+(abs(a[1]-b[1])*abs(a[1]-b[1]))]++;
            }
            for(auto a:m){
                if(a.second>1){
                    ans+=((a.second-1)*(a.second));
                }
            }
            m.clear();
        }
       return ans;
        
    }
};
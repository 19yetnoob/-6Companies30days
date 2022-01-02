class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>ans;
        int idx=0;
        for(auto a:string_list)
        {
            string temp=a;
            sort(a.begin(),a.end());
            m[a].push_back(temp);
        }
        for(auto a:m)
        {
            ans.push_back(a.second);
        }
        return ans;
    }
};

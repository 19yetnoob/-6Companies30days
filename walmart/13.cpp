class Solution {
public:
    bool cmp(string a,string b){
        if(a.size()>b.size())
            return 1;
        else{
            return 0;
        }
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        map<int,vector<string>>m;
        for(auto a:nums)
           m[a.size()].push_back(a);
        nums.clear();
        for(auto a:m){
            vector<string>vv=a.second;
            sort(vv.begin(),vv.end());
            for(auto a:vv)
                nums.push_back(a);
        }
        int n=nums.size();
        n-=k;
        return nums[n];
    }
};
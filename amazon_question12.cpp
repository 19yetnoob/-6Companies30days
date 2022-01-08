class Solution{
    public:
    string colName (long long int n)
    {
        string ans="";
        while(n>0)
        {
            if(n%26==0)
            ans='Z'+ans;
            else
            ans=(char)(64+n%26)+ans;
            n=(n-1)/26;
        }
        return ans;
    }
};

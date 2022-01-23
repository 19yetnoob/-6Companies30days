     vector<string> res;
    
    vector<char> getAlpha(char num)
    {
        vector<char> res;
        vector<pair<int,int>> arr{{0,2},{3,5},{6,8},{9,11},{12,14},{15,18},{19,21},{22,25}}; 
        int times = num-'2';
        for (int i=arr[times].first; i<=arr[times].second; i++ )
        {
            res.push_back(i+'a');
        }
        return res;
    }
    
    void dfs(int i, string s, string last, int n)
    {
        auto a = getAlpha(s[i]);
        if (i==n-1)
        {
            for (char x:a)
            {
                res.push_back(last+x);
            }
            return;
        }
        
        for (char x:a)
        {
            dfs(i+1, s, last+x, n);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        string digits="";
        for(int i=0;i<N;i++)
        digits+=(char)(a[i]+'0');
        if (digits.size())
        {
            dfs(0, digits, "", digits.size());
        }
        return res;
    }
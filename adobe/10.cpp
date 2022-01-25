vector<string> winner(string arr[],int n)
    {
       map<string,int>m;
       for(int i=0;i<n;i++)
       m[arr[i]]++;
       int ma=0;
       for(auto a:m){
           ma=max(ma,a.second);
       }
       for(auto a:m){
           if(a.second==ma)
           return {a.first,to_string(ma)};
       }
    }
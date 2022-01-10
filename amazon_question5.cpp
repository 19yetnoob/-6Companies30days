class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<vector<string>>ans;
        string check="";
        //int size = sizeof(contact)/sizeof(contact[0]);
        
        for(int i=0;i<s.size();i++){
            check+=s[i];
            set<string>v;
            vector<string>a;
            for(int j=0;j<n;j++){
               //  cout<<"dd"<<endl;
                string c=contact[j];
                string test="";
                for(int k=0;k<=i;k++)
                {
                    test+=c[k];
                }
                
                //cout<<test<<endl;
                if(test==check)
                v.insert(c);
            }
            if(v.size()==0)
            a.push_back("0");
            else
            {
               for(auto b:v)
               a.push_back(b);
            }
            ans.push_back(a);
        }
        return ans;
    }
};

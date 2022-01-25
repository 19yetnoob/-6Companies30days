string amendSentence (string s)
    {
       string ans="";
       int j=0;
       if(s[0]<='Z')
       ans+=(s[0]-'A'+'a'),j=1;
       for(int i=j;i<s.size();i++){
           if(s[i]<='Z'){
               ans+=" ";
               ans+=(s[i]-'A'+'a');
           }
           else
           {
               ans+=s[i];
           }
       }
       return ans;
       }
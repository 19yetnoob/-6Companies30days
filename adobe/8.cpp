int atoi(string str) {
        int res=0;
        int s=1;
        if(str[0]=='-')
        s=-1;
        for(int i=0;i<str.size();i++)
        {
            if(s==-1&&i==0)
            continue;
            int c=str[i]-'0';
            if(c>=0&&c<=9){
                res=res*10+c;
            }
            else
            return -1;
        }
        return s*res;
    }
    
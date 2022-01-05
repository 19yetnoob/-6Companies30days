class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int gcd=__gcd(str1.size(),str2.size());
        string check="",t="";
        for(int i=0;i<gcd;i++)
        {
             if(str1[i]!=str2[i])
                 return t;
             check+=str1[i];
        }
        string a="",b="";
        for(int i=0;i<str1.size()/gcd;i++)
            a+=check;
        for(int i=0;i<str2.size()/gcd;i++)
            b+=check;
        if(a==str1&&b==str2)
        return check;
        else
            return t;
    }
};

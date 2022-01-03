string encode(string src)
{     
  string ans="";
  src+='1';
  int cnt=1;
  for(int i=0;i<src.size()-1;i++)
  {
      if(src[i]!=src[i+1])
      {
          ans+=src[i];
          ans+=(char)cnt+'0';
          cnt=1;
      }
      else
      cnt++;
  }
  return ans;
} 

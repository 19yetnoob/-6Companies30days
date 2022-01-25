#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<pair<int,int>,pair<int,int>>>v(n);
    for(int i=0;i<n;i++){
    string s;cin>>s;
   // v[i]={{0,0},{0,0}};
   // int a=0,b=0,c=0,d=0;
   vector<int>a;
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        j=j*10+s[i]-'0';
        else
        a.push_back(j),j=0;
    }
        if(a.size()==1)
        v[i]={{a[0],0},{0,0}};
        else if(a.size()==2)
        v[i]={{a[0],a[1]},{0,0}};
        else if(a.size()==3)
         v[i]={{a[0],a[1]},{a[2],0}};
         else if(a.size()==4)
          v[i]={{a[0],a[1]},{a[2],a[3]}};
    }
    sort(v.begin(),v.end());
    // for(auto a:v)
    // cout<<a.first.first<<" ";
    // cout<<endl;
    }
    


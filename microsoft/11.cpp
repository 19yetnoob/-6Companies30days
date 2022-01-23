vector<string> generate(int N)
{
	vector<string>ans;
	for(int i=1;i<=N;i++){
	    string a="";
	    int t=i;
	    while(t>0){
	        if(t%2==0)
	        a='0'+a;
	        else
	        a='1'+a;
	        t/=2;
	    }
	    ans.push_back(a);
	}
	return ans;
}

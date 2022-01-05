class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    set<long long>s;
	    vector<long long >v;
	    s.insert(1);
	    while(true)
	    {
	          auto it=s.begin();
	          long long top=*it;
	          v.push_back(top);
	          s.erase(it);
	          s.insert(1ll*top*2);
	          s.insert(1ll*top*3);
	          s.insert(1ll*top*5);
	          if(v.size()==n+3)
	          break;
	    }
	    return v[n-1];
	}
	
};

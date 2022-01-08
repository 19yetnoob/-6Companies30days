string FirstNonRepeating(string A){
		    queue<char>q;
		    int a[26]={0};
		    string ans="";
            //q.push(A[0]);
		    for(auto b:A)
		    {
		       a[b-'a']++;
		       q.push(b);
		       //if(q.size()>)
		       while(a[(q.front())-'a']>1)
		       {
		           q.pop();
		           if(q.size()==0)
		           break;
		       }
		       if(q.size()==0)
		       ans+='#';
		       else
		       ans+=q.front();
		    }
		    return ans;
		}

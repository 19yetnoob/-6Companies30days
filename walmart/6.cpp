int powe(long long x, unsigned int y, int p)
{
    int res = 1;     
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
    long long power(int N,int R)
    {
       return powe(N,R,1000000007);
        
    }

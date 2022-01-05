class Solution {
  public:
    int findPosition(int n , int m , int k) {
         if(m%n==0)
         {
             if(k==1)
             return n;
             else
             return k-1;
         }
         else
         {
             m%=n;
             int t=(k+m-1)%n;
              return((t==0)? n: t); 
         }
    }
};

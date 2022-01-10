class Solution {
public:
    int longestMountain(vector<int>& a) {
        int ans=0;
        int n=a.size();
        for(int i=1;i<n;i++)
        {
           int j=i;
            int count=1;
            while((j<n)&&(a[j]>a[j-1]))
            {
                j++;
                count++;
            }
            int check=0;
            while((i!=j)&&(j<n)&&(a[j]<a[j-1]))
            {
                j++;
                count++;
                check=1;
            }
            if(count>2&&check>0){
                ans=max(ans,count);
                j--;
            }
            i=j;
        }
        return ans;
        
        
        
        
    }
};

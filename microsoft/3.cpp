void rotate(vector<vector<int> >& a)
{
   for(int i=0;i<3;i++){
       int n=a.size();
        int arr[n];
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                int temp=a[j][k];
                a[j][k]=a[k][j];
                a[k][j]=temp;
            }
        }
         for(int j=0;j<n;j++){
             reverse(a[j].begin(),a[j].end());
            }
         
    }
}
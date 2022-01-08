class Solution{
public:
    bool row(vector<vector<int>>c,int n,int col)
    {  int co=0;
   // cout<<n<<endl;
        for(int i=0;i<9;i++)
            if(c[i][col]==n) co++;
    // cout<<co<<" "<<n<<endl; 
     return (co==1);
            
            
   }
         bool col(vector<vector<int>>c,int n,int row)
         {
             int co=0;
        for(int i=0;i<9;i++)
            if(c[row][i]==n) co++;
     return (co==1);
    }
    bool small(vector<vector<int>>c,int n,int a,int b)
    {
        int co=0;
        for(int i=a*3;i<a*3+3;i++)
        {
            for(int j=b*3;j<b*3+3;j++)
            {
                 if(c[i][j]==n) co++;
            }
        }
        return (co==1);
        
    }
    int isValid(vector<vector<int>> board){
       // cout<<board.size()<<endl;
        for(int i=0;i<9;i++)
            {
                for(int j=0;j<9;j++)
                {
                    if(board[i][j]!=0)
                    {
                    bool a=row(board,board[i][j],j);
                     bool b=col(board,board[i][j],i);
                        bool c=small(board,board[i][j],i/3,j/3);
                        // if(a==0)
                        // cout<<i<<"dd"<<j<<endl;
                        //  if(b==0)
                        // cout<<i<<"bb"<<j<<endl;
                        //  if(c==0)
                        // cout<<i<<"cc"<<j<<endl;
                        if(((a&&b)&&(b&&c))==false) return 0;
                        }
                }
            }
            return 1;
    }
};

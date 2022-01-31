class Solution {
    int n;
    Node* util(vector<vector<int>>& grid, int i1, int j1, int i2, int j2) {
        if(i1<0 || i1>=n || j1<0 || j2>=n)
            return NULL;
        bool ones = 0;
        bool zeroes = 0;
        for(int i=i1; i<=i2; i++) {
            for(int j=j1; j<=j2; j++) {
                if(ones && zeroes) break;
                ones |= !!grid[i][j];
                zeroes |= !grid[i][j];
            }
        }
        auto t = new Node;
        if(ones ^ zeroes) {
            t->isLeaf = 1;
            t->val = ones ? 1 : 0;
            return t;
        }
        int a = (i1+i2)/2;
        int b = (j1+j2)/2;
        t->topLeft = util(grid,i1,j1,a,b);
        t->topRight = util(grid,i1,b+1,a,j2);
        t->bottomLeft = util(grid,a+1,j1,i2,b);
        t->bottomRight = util(grid,a+1,b+1,i2,j2);
        return t;
    }    
public:
    Node* construct(vector<vector<int>>& grid) {
        n = grid.size();
        return util(grid,0,0,n-1,n-1);
    }
};

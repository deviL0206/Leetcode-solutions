class Solution {
    
  void dfs(vector<vector<int>>& grid, int i, int j, int m, int n)
    {
        if(i<0||j<0||i>=m||j>=n||grid[i][j]==0)
            return;
        
        grid[i][j] = 0; //marking it as visited
          count++;
        
        dfs(grid,i+1,j,m,n) ;
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i,j-1,m,n);
    }
public:
    
    int count =0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
         int m = grid.size();
        int n = grid[0].size();
        
        int i,j;
       // int count =0;
        int maxi = 0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                
                    dfs(grid,i,j,m,n);
                   
                    if(count>maxi)
                        maxi = count;  
                    count=0;
                        
                }
            }
        }
        return maxi;  
    }
};
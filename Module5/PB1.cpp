class Solution {
    public:
        bool vis[105][105];
        int n,m;
        int cnt;
        vector<pair<int,int>>d={{-1,0},{1,0},{0,1},{0,-1}};
    
        bool valid(int i,int j)
        {
            if(i<0|| i>=n || j<0||j>=m)
                return false;
            return true;
        }
        void dfs(int si,int sj,vector<vector<int>>&grid)
        {
            cout<<si<<" "<<sj<<endl;
            vis[si][sj]=true;
            for(int i=0; i<4; i++)
            {
                int ci=si+d[i].first;
                int cj=sj+d[i].second;
                // 3 step in logic:
                // step --1-- invalid asa ke nh
    
                if(!valid(ci,cj))
                cnt++;
    
                // step 2 water hola
    
                if(valid(ci,cj)&& grid[ci][cj]==0)
                cnt++;
    
                // step 3 hola  land hola  dfs hoba
                if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1)
                dfs(ci,cj,grid);
                 
                
    
         
            }
        }
        int islandPerimeter(vector<vector<int>>& grid) {
            cnt=0;
             n=grid.size();
             m=grid[0].size();
             
             for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    if(!vis[i][j]&&grid[i][j]==1)
                    dfs(i,j,grid);
             
            return cnt;        
        }
    
    };
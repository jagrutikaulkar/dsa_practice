class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        if(grid.empty())
        return 0;

        int n= grid.size();
        int m= grid[0].size();

        int total=0;
        int count=0;

        int min=0;
       queue<pair<int, int>> rotten;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                total++;

                if(grid[i][j]==2)
                rotten.push({i,j});
            }
        }

        while(!rotten.empty())
        {
            int k= rotten.size();
            count+=k;

            while(k--)
            {
                 int x= rotten.front().first;
                 int y= rotten.front().second;

                 rotten.pop();

                 int dx[4]={0,0,1,-1};
                 int dy[4]={1,-1,0,0};

                 for(int i=0;i<4;i++)
                 {
                   
                        int xn= x+ dx[i];
                        int yn= y+ dy[i];
                    
                    if(xn< 0 || yn<0 || xn>= n || yn >=m|| grid[xn][yn]!=1)
                    continue;

                    grid[xn][yn]=2;
                    rotten.push({xn,yn});
                 }

            }

            if(!rotten.empty())
            {
                min++;
            }

        }

        return total == count ? min : -1;
    }
};
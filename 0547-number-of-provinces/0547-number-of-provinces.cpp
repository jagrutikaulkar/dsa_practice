class Solution {
public:
    void dfs(int node, vector<int> &vis, vector<int> adj_ls[])
    {
        vis[node]=1;
        for(auto it: adj_ls[node])
        {
            if(!vis[it])
            {
                dfs(it, vis, adj_ls);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected.size();
    vector<int> adj_ls[n];
    
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<n;j++)
         {
            if(isConnected[i][j]==1 && j!=i)
            {
                adj_ls[i].push_back(j);
                adj_ls[j].push_back(i);
            }
         }
      }

      vector<int> vis(n,0);
      int count=0;
      for(int i=0;i<n;i++)
      {
          if(vis[i]==0)
          {
             count++;
             dfs(i,vis, adj_ls);
          }
      }
      return count;
    }
};
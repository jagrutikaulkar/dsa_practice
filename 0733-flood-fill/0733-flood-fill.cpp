class Solution {
public:
  void dfs(vector<vector<int>>& image, int x,int y, int color, int original)
  {
      int n=image.size();
      int m= image[0].size();

      if(x<0|| y<0 || x>=n ||y>=m|| image[x][y]!=original)
      return;

      image[x][y]=color;

      dfs(image, x,y+1,color,original);
      dfs(image,x, y-1, color, original);
      dfs(image, x+1,y,color,original);
      dfs(image,x-1,y,color,original);
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if (image.empty())
            return image;
        
        int original= image[sr][sc];

        if(original==color)
        return image;

        dfs(image,sr,sc,color,original);

        return image;
        
    }
};
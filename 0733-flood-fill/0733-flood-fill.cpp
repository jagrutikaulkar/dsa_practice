class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if (image.empty())
            return image;

        int n = image.size();
        int m = image[0].size();

        int originalColor = image[sr][sc];

        // Already the required color
        if (originalColor == color)
            return image;

        queue<pair<int, int>> q;
        q.push({sr, sc});

        image[sr][sc] = color;

        int xn[4] = {0, 0, 1, -1};
        int yn[4] = {1, -1, 0, 0};

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int dx = x + xn[i];
                int dy = y + yn[i];

                // Check boundary and original color
                if (dx < 0 || dy < 0 || dx >= n || dy >= m ||
                    image[dx][dy] != originalColor)
                    continue;

                image[dx][dy] = color;
                q.push({dx, dy});
            }
        }

        return image;
    }
};
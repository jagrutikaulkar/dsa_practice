class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> square;
        for(int num:nums)
        {
            square.push_back(num*num);
        }

        sort(square.begin(), square.end());
        return square;
    }
};
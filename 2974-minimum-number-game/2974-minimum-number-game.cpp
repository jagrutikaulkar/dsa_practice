class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n= nums.size();
        vector<int> arr(n);

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i+=2)
        {
            reverse(nums.begin()+i,nums.begin()+i+2);
        }

return nums;
    }
};
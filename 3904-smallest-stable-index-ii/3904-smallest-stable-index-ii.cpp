class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        

        int n= nums.size();

        vector<int> min_n(n);
        min_n[n-1]= nums[n-1];

        for(int i=n-2;i>=0;i--)
        {
            min_n[i]= min(min_n[i+1], nums[i]);
        }

        int max_n=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max_n)
            max_n= nums[i];

            if((max_n - min_n[i])<=k)
            {
               return i;
            }
        }
        return -1;
    }
};
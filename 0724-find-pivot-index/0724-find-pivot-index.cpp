class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]= prefix[i-1]+nums[i];
        }


        int left_sum=0, right_sum=0;
        for(int i=0;i<n;i++)
        {
            if(i>0)
            {
                left_sum= prefix[i-1];
            }

            right_sum = prefix[n-1]- prefix[i];

            if(left_sum==right_sum)
            {
                return i;
            }
        }
        return -1;
    }
};
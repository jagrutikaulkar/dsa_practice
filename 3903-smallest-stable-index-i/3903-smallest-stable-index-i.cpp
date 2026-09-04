class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        int result=-1;
        vector<int> min_num(n);

        int max= INT_MIN;
                
        min_num[n-1]=nums[n-1];

        for(int i=n-2;i>=0;i--)
        {
            min_num[i]= min(nums[i], min_num[i+1]);
        }
        
        for(int i=0;i<n;i++)
        {
           if(nums[i] > max)
           max= nums[i];

           if((max-min_num[i]) <= k)
           return i;
        }

        return result;
    }
};
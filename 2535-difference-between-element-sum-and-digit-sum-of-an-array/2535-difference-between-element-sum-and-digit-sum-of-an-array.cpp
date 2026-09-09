class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int whole_sum =0;
        int digit_sum =0;

        for(int i=0;i<nums.size();i++)
        {
             whole_sum += nums[i];
             while(nums[i]>0)
             {
                digit_sum += nums[i]%10;
                nums[i] = nums[i]/10;
             }
        }

        return (whole_sum- digit_sum);
    }
};
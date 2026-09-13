class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single_sum=0;
        int double_sum=0;
        for(int num:nums)
        {
            if(num<10)
            {
                single_sum+= num;
            }
            else
            {
                double_sum+= num;
            }
        }

        if(single_sum != double_sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
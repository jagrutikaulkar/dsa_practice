class Solution {
public:
    int findMaxLength(vector<int>& nums) {


        unordered_map<int,int> mp;

        mp[0]=-1;
        int n= nums.size();
        int prefix =0;
        int max_len =0;
        

        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                prefix++;
            }
            else{
                prefix--;
            }

            if(mp.find(prefix)!=mp.end())
            {
                max_len= max(max_len, i-mp[prefix]);
            }
            else
            {
                mp[prefix]=i;
            }
        }

        return max_len;
    }
};
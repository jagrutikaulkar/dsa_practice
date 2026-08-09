class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n= nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int prefix_sum=0;
        int count=0;

        for(int i=0;i<n;i++)
        {
            prefix_sum+= nums[i];

            int remainder= (prefix_sum % k + k)%k;

            if(mp.find(remainder)!=mp.end())
            {
                 count += mp[remainder];
            }

            mp[remainder]++;
        }

        return count;
    }
};


/*
int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+= nums[j];

                if(sum % k==0)
                {
                    count++;
                }
            }
        }

        return count;
*/
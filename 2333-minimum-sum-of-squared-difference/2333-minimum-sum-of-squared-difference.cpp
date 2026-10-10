class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        
        int n= nums1.size();
        long long k = 1LL* k1+k2;

        vector<int> diff(n);
        int maxiDiff=0;

        for(int i=0;i<n;i++)
        {
            diff[i] = abs(nums1[i]-nums2[i]);
            maxiDiff = max(maxiDiff, diff[i]);
        }

        vector<long long> freq(maxiDiff+1, 0);
        for(int x: diff)
        {
            freq[x]++;
        }

        for(int i=maxiDiff; i>0 && k>0; i--)
        {
              long long move = min(k,freq[i]);

              freq[i]-= move;
              freq[i-1] += move;

              k-= move;
        }


       long long ans=0;
       for(int i=0;i<= maxiDiff;i++)
       {
         ans+= freq[i] *i*i;
       }

       return ans;
    }
};
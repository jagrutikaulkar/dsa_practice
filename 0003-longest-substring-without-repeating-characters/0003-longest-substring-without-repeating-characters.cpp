class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        unordered_set<char>se;
        int maxi=0;

        for(int right=0;right<s.length();right++)
        {
            while(se.find(s[right])!=se.end())
            {
                se.erase(s[left]);
                left++;
            }

            se.insert(s[right]);
            maxi= max(maxi, right-left+1);

        }
        return maxi;
    }
};
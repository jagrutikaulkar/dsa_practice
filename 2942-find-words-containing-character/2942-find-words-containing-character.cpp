class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        
        vector<int> ans;
        for(int i=0;i<words.size();i++)
        {
            string s= words[i];
            if(s.contains(x))
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
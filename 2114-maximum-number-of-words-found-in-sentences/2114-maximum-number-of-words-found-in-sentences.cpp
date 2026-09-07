class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int max_count=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            string sen= sentences[i];
            
            int count=1;
            for(int j=0;j<sen.length();j++)
            {
                if(sen[j] == ' ')
                count++;
            }
           max_count = max(count,max_count);

        }
        return max_count;
    }
};
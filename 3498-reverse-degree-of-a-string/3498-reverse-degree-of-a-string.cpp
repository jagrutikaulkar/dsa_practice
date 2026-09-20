class Solution {
public:
    int reverseDegree(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            int num = ((26 -(s[i]-'a'))*(i+1));
            count+= num;
            
        }
        return count;
    }
};
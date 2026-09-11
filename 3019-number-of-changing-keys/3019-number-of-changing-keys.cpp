class Solution {
public:
    int countKeyChanges(string s) {

        int count =0;
        string s_small ="";
        for(char ch:s)
        {
            if(ch >= 65 && ch <= 90)
            {
                s_small += (char)(ch+32);
            }
            else
            {
                s_small += ch;
            }
 
        }

        for(int i=0;i<s_small.length()-1;i++)
        {
             if(s_small[i]!=s_small[i+1])
             count++;
        }

        return count;
        
    }
};
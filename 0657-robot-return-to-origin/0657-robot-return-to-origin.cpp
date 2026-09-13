class Solution {
public:
    bool judgeCircle(string moves) {
        
        int up_down=0;
        int lr=0;
        for(char ch:moves)
        {
            if(ch=='U')
            up_down++;
            else if(ch=='D')
            up_down--;
            else if(ch=='L')
            lr++;
            else
            lr--;
        }
        if(up_down==0 && lr==0)
        return true;
        else
        return false;
    }
};
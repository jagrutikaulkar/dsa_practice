class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // we are simple checking if the rect1 or rect2 are completly left or right or up or down to the other reactangle then they will not overlap return false
        if((rec1[2]<= rec2[0]) ||
           (rec2[2]<= rec1[0]) ||
           (rec1[3]<= rec2[1]) ||
           (rec2[3]<= rec1[1]))
           {
            return false;
           }

           return true;
    }
};
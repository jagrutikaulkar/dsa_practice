class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int dx=0;
        int dy=0;

     // this condition check the closest point of reactangle that 
     //is close to the circle center if circle is left x1 is close, if circle is right x2 is close similary for  up and down then we calculate the distance between the circle center and the point of reactangle ... and we know if it is smaller than radius they intersect and not otherwise.
        if(xCenter < x1)
        {
            dx = x1-xCenter;
        }
        else if(xCenter > x2)
        {
            dx = xCenter - x2;
        }

        if(yCenter < y1)
        {
            dy = y1- yCenter;
        }
        else if(yCenter > y2)
        {
            dy = yCenter -y2;
        }

        return ((dx*dx)+(dy*dy)) <= (radius*radius);
    }
};
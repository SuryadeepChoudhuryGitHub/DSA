class Solution {
public:
    double angleClock(int hour, int minutes) {
        double m = (minutes/60.0) * 360;
        double l;
        if (hour + (minutes/60.0) >= 12) {
            l = hour + (minutes/60.0) - (12); 
        }
        else {
            l = hour + (minutes/60.0);
        }
        double h = (l)/12.0 *360;
        double degree = fabs(m - h);
        if (degree > 180) {
            return (360 - degree);
        }
        else {
            return degree;
        }
    }
};
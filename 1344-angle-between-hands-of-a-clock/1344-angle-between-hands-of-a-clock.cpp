class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h=(hour*30)+(minutes*0.5);
        double m=6*minutes;
        double a=abs(h-m);

        return min (a,360-a);
        
    }
};
class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour == 12)
            hour =0;

        double hourangle = hour * 30 + minutes * 0.5;
        double minutesangle = minutes * 6;

        double diff = abs(hourangle-minutesangle);

        return min(diff,360-diff);
    }
};
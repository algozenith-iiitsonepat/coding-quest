class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // First we will calculate minimum time needed to reach the finish from start
        int m = max(abs(fx-sx),abs(fy-sy));
        // Now we can see that if we can reach in time <= t then we can reach in time t by moving diagonally around (fx,fy)
        // There is one edge case which is when start and final coords are same and time is 1 then it will be false
        return (m!=0 || t!=1) && m<=t;
    }
};
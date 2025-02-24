class Solution {
public:
    int climbStairs(int n) {
        int sum = 0;
        int f = 1;
        int s =  2;
        if(n <= 2) return n;
        for(int i = 3; i<= n;i++){
            sum = f + s;
            f = s;
            s = sum;
        }
        return sum;
    }
};
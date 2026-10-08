class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        double xn = x / 2.0;
        double xn1;

        while (true) {
            xn1 = (xn + x / xn) / 2;

            if (abs(xn1 - xn) < 0.01)
                break;

            xn = xn1;
        }

        return (int)xn1;
    }
};
class Solution {
public:
    int reverse(int x) {
        int X=0;
        while(x){
           int rem=x%10;
            if (X > INT_MAX / 10 || X < INT_MIN / 10)
                return 0;
            X=X*10+rem;
            x=x/10;

        }
        return X;
    }
};
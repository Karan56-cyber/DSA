class Solution {
public:
    int hammingWeight(int n) {
        int t=n,count=0;
        while(t){
            t=t&(t-1);
            count++;
        }
        return count;
    }
};
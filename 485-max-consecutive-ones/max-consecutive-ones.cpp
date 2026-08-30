class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maximum=0;
        for(auto a : nums){
            if(a==1){
                count+=1;
            }
            else{
                count=0;
            }
            maximum=max(maximum,count);
        }
        return maximum;
    }
};
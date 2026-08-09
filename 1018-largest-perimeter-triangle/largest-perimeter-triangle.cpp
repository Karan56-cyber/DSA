class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int len=nums.size()-1;
        while(len>=2){
            if(nums[len-1]+nums[len-2]>nums[len])
            {
                return nums[len]+nums[len-1]+nums[len-2];
            }
            len-=1;
        }
        return 0;
    }
};
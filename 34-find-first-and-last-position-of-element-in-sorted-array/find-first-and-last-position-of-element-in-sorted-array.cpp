class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        int upper=INT_MIN,lower=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                lower=min(lower,mid);
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                upper=max(lower,mid);
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(lower==INT_MAX && upper==INT_MIN){
            lower=upper=-1;
        }
        return {lower,upper};
    }
};
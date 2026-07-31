class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag;
        if (nums.size()<=2){
            return true;
        }
        for (int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            flag=-1;
            break;
        }
        else if (nums[i]<nums[i+1]){
            flag=1;
            break;
        }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(flag==-1 && nums[i]<nums[i+1]){
                return false;
            }
            if(flag==1 && nums[i]>nums[i+1]){
                return false;
            }

        }
    return true;
    }
};
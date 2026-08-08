class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int temp=0;
        //     while(nums[i]!=0){
        //         nums[i]/=10;
        //         temp+=1;
        //     }
        //     if(temp%2==0){
        //         ans+=1;
        //     }
        // }
        // return ans;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9 && nums[i]<=99 || nums[i]>999 && nums[i]<=9999 || nums[i]>99999 && nums[i]<=999999){
                ans+=1;
            }
        }
        return ans;
    }
};
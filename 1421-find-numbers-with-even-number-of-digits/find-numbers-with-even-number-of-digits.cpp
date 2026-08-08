class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int temp=0;
            while(nums[i]!=0){
                nums[i]/=10;
                temp+=1;
            }
            if(temp%2==0){
                ans+=1;
            }
        }
        return ans;
    }
};
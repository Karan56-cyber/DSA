class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int total=0,player1=0;
        for(auto x:nums){
            total+=x;
        }
        player1=solve(nums,0,nums.size()-1);
        if(2*player1>=total){
            return true;
        }
        return false;
    }
    int solve(vector<int>&nums,int i,int j){
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
        int take_i=nums[i]+min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int take_j=nums[j]+min(solve(nums,i+1,j-1),solve(nums,i,j-2));
        return max(take_i,take_j);
    }
};
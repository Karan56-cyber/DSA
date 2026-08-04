class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),-1));
        int total=0,player1=0;
        for(auto x:nums){
            total+=x;
        }
        player1=solve(nums,0,nums.size()-1,dp);
        if(2*player1>=total){
            return true;
        }
        return false;
    }
    int solve(vector<int>&nums,int i,int j,vector<vector<int>>&dp){
        
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take_i=nums[i]+min(solve(nums,i+2,j,dp),solve(nums,i+1,j-1,dp));
        int take_j=nums[j]+min(solve(nums,i+1,j-1,dp),solve(nums,i,j-2,dp));
        return dp[i][j]=max(take_i,take_j);
    }
};
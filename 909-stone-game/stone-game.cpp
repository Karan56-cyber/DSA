class Solution {
public:
    
    bool stoneGame(vector<int>& piles) {
        vector<vector<int>>dp(piles.size(),vector<int>(piles.size(),-1));
        int total=0,alice=0;
        alice=solve(piles,0,piles.size()-1,dp);
        for(auto x:piles){
            total+=x;
        }
        if(total-alice<alice){
            return true;
        }
        return false;
    }
    int solve(vector<int>&piles,int i,int j,vector<vector<int>>&dp){
       
        if(i>j){
            return 0;
        }
        if(i==j){
            return piles[i];

        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take_i=piles[i]+min(solve(piles,i+2,j,dp),solve(piles,i+1,j-1,dp));
        int take_j=piles[j]+min(solve(piles,i,j-2,dp),solve(piles,i+1,j-1,dp));
        return dp[i][j]=max(take_i,take_j);
    }
};
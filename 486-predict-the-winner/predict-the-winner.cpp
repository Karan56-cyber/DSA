class Solution {
public:
    int solve(vector<int> &nums,int i ,int j){
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
        int play1 = nums[i]-solve(nums,i+1,j);
        int play2 = nums[j]-solve(nums,i,j-1);

        return max(play1,play2);


    }
    bool predictTheWinner(vector<int>& nums) {
        int x = solve(nums,0,nums.size()-1);

        if(x>=0){
            return true ;
        }
        return false;
    }
};
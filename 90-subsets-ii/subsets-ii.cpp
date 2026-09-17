class Solution {
public:
void subset(vector<int>&nums,vector<vector<int>>&ans,vector<int>&sets,int i){
    if(i==nums.size()){
        ans.push_back(sets);
        return;
    }
    sets.push_back(nums[i]);
    subset(nums,ans,sets,i+1);
    sets.pop_back();
    int index=i+1;
    while(index<nums.size()&&nums[i]==nums[index]){
        index++;
    }
    subset(nums,ans,sets,index);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        vector<int>sets;
        subset(nums,ans,sets,0);
        return ans;
    }
};
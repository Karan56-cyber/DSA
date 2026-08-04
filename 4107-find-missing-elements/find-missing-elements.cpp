class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min=INT_MAX,max=INT_MIN,total=0;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]=x;
            if(min>x){
                min=x;
            }
            if(max<x){
                max=x;
            }
        }
       for(int i=min;i<=max;i++){
        if(mp.find(i)==mp.end()){
            ans.push_back(i);
        }
       }
       sort(ans.begin(),ans.end());
       return ans;
        
    }
};
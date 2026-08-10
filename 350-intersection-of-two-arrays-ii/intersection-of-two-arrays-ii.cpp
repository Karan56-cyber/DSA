class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>st;
        vector<int>ans;
        for(auto i:nums1){
           st[i]++;
        }
        for(auto i:nums2){
            if (st.find(i)!=st.end() && st[i]>0){
                ans.push_back(i);
                st[i]-=1;
            }
        }
        return ans;
    }
};
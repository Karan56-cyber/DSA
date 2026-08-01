class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min=INT_MAX;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(min>abs(arr[i]-arr[i+1])){
                min=abs(arr[i]-arr[i+1]);
            }
        }
        for(int i=0;i<arr.size()-1;i++){
            if(min==arr[i+1]-arr[i]){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};
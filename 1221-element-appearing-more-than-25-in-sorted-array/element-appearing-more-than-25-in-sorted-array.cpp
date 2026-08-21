class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        n=n/4;
        int prev=arr[0],curr,count=0;
        for(auto val:arr){
            if(prev==val){
                count+=1;
            }
            else {
                prev=val;
                count=1;
            }
            if(count>n){
                return prev;
            }
        }
        return -1;
    }
};
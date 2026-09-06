class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,ele1=0,ele2=0;
        for(auto i:nums){
            if(ele1==i){
                count1++;
            }
            else if(ele2==i){
                count2++;
            }
            else if(count1==0){
                ele1=i;
                count1=1;
            }
            else if(count2==0){
                ele2=i;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        int fre1=0,fre2=0;
        for(auto i:nums){
            if(ele1==i){
                fre1++;
            }
            else if(ele2==i){
                fre2++;
            }
        }
        vector<int> ans;

        if (fre1 > nums.size() / 3) {
            ans.push_back(ele1);
        }

        if (fre2 > nums.size() / 3) {
            ans.push_back(ele2);
        }
        return ans;
    }
};
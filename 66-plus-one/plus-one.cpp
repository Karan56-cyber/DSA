class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count=0;
        for(auto i:digits){
            if(i==9){
            count++;
            }
        }
        int i=digits.size()-1;
        if(count==i+1){
            for(int j=0;j<digits.size();j++){
                digits[j]=0;
            }
            digits[0]=1;
            digits.push_back(0);
            return digits;
        }
        while(i>=0){
            if(digits[i]==9){
                digits[i]=0;
                i--;
            }
            else{
                digits[i]=digits[i]+1;
                return digits;
            }
        }
        return digits;
    }
};
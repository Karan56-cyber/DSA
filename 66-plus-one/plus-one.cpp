class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        while(i>0){
            if(digits[i]==9){
                digits[i]=0;
                i--;
            }
            else{
                digits[i]+=1;
                return digits;
            }
        }
        if(digits[0]==9){
            digits[0]=1;
            digits.push_back(0);
        }
        else{
            digits[0]+=1;
        }
        return digits;
    }
};
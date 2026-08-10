class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1,length=0;
        int flag=0;
        while(i>=0){
            if(s[i]!=' '){
                length+=1;
                flag=1;
            }
            else if(flag){
                return length;
            }
            i--;
            
        }
        return length;
    }
};
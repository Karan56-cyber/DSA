class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0){
            return true;
        }
        int j=0;
        for(auto ch:t){
            if(j<s.size() && s[j]==ch){
                j++;
            }
        }
        return s.size()==j;
    }
};
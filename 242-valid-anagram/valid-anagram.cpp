class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]+=1;
            }
            else{
                mp[s[i]]=1;
            }

        }
    for(int i=0;i<t.size();i++){
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]--;
            }
            else{
                return false;
            }
        }
        for (auto x : mp) {

    if (x.second != 0){

        return false;
    }
}
        return true;
    }
};
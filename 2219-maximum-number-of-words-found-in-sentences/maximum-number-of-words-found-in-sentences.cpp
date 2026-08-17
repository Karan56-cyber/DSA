class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size()-1;
        int count=0,maxi=0;
        for(int i=0;i<=n;i++){
            count=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]== ' '){
                    count+=1;
                }

            }
            if(count>maxi){
                maxi=count;
            }
        }
        return maxi+1;
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowbegin=0,rowend=matrix.size()-1,colbegin=0,colend=matrix[0].size()-1;
        vector<int>ans;
        while(rowbegin<=rowend && colbegin<=colend){
            for(int i=colbegin;i<=colend;i++){
                ans.push_back(matrix[rowbegin][i]);
        }
        rowbegin++;
            for(int j=rowbegin;j<=rowend;j++){
                ans.push_back(matrix[j][colend]);
              
            }
              colend--;
            for(int k=colend;k>=colbegin;k--){
                if (rowbegin>rowend){
                    break;
                }
                ans.push_back(matrix[rowend][k]);
                

            }
            rowend--;
            for(int l=rowend;l>=rowbegin;l--){
                if(colbegin>colend){
                    break;
                }
                ans.push_back(matrix[l][colbegin]);
                
            }
            colbegin++;
        }
        return ans;
    }
};
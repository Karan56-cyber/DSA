class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX,current,maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            else if(buy<prices[i]){
                current=prices[i]-buy;
                if(current>maxprofit){
                    maxprofit=current;
                }
            }
        }
        return maxprofit;
    }
};
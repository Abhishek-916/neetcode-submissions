class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx =0;
        int minn = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>minn){
                maxx=max(maxx,prices[i]-minn);
            }
            else{
                minn=min(minn,prices[i]);
            }
        }
        return maxx;

        
    }
};

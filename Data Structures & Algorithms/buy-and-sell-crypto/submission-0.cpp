class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int lowest=prices[0];
        for(int n:prices){
            maxP=max(maxP,n-lowest);
            lowest=min(lowest,n);
        }
       return maxP; 
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int left=0;
        int right=1;
        int maxp=0;
        while(right<prices.size()){
          if(prices[left]<prices[right]){
          int maxl=prices[right]-prices[left];
           maxp=max(maxp,maxl);
          }
          else{
            left=right;
          }
          right++;
      
        }
        return maxp;
    }
};
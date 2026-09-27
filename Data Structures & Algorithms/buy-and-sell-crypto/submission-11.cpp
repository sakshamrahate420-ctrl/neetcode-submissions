class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int left=0;
        int right=1;
        int a=0;
        while(right<prices.size()){
          if(prices[left]<prices[right]){
          int b=prices[right]-prices[left];
          a=max(a,b);
           
          }
          else{
            left=right;
          }
          right++;
         
        }
      return a;
    }
};

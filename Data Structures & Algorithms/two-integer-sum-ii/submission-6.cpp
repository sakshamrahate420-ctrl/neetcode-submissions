class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
            int hello=numbers[left]+numbers[right];
            if(hello==target){
                return {left+1,right+1};
            }
            else if(hello<target){
                left++;
            }
            else{
                right--;
            }
        }
      return {};
    }
};

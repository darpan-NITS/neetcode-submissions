class Solution {
public:
    bool canJump(vector<int>& nums) {
         int goal=nums.size()-1;
         for(int n=nums.size()-2;n>=0;n--){
            if(nums[n]+n>=goal){
                goal=n;
            }
         }
         return goal==0;
    }
};

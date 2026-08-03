class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0],currsum=0;
        for(int n:nums){
            if(currsum<0){
                currsum=0;
            }
            currsum+=n;
            maxsum=max(maxsum,currsum);
        }
        return maxsum ;
    }
};

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int globMin=nums[0],globMax=nums[0];
        int cmax=0,cmin=0,total=0;
        for(int n:nums){
            cmax=max(cmax+n,n);
            cmin=min(cmin+n,n);
            total+=n;
            globMax=max(globMax,cmax);
            globMin=min(globMin,cmin);
        }
        return globMax>0? max(total-globMin,globMax):globMax;
    }
};
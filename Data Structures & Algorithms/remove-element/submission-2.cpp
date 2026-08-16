class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> tmp;
        for(int i:nums){
            if(i!=val){
                tmp.push_back(i);
            }
        }
        for(int i=0;i<tmp.size();i++){
            nums[i]=tmp[i];
        }
        return tmp.size();
    }
};
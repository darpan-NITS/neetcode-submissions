class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> visit;
        for(int i:nums){
        if(visit.count(i)){
            return true;
        }
        visit.insert(i);
        }
        return false;

        
    }
};
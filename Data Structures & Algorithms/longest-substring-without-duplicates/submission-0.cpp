class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int res=0;
        unordered_set<char> sed;
        for(int r=0;r<s.size();r++){
            while(sed.find(s[r])!=sed.end()){
                sed.erase(s[l]);
                l++;
            }
            sed.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};

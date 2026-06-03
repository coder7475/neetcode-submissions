class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> cs;
        int l = 0, res = 0;

        for (int r = 0; r < s.size(); r++) {
            if (cs.find(s[r]) != cs.end()){                
                l = max(cs[s[r]] + 1, l);
            }
            cs[s[r]] = r;
            res = max(res, r - l + 1);
        }

        return res;
    }
};

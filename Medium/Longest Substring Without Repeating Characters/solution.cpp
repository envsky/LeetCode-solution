class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(128, -1);
        int output = 0;
        int flag = -1;
        for(int i=0; i<s.length(); i++) {
            if(map[s[i]] > flag)
                flag = map[s[i]];
            map[s[i]] = i;
            output = max(output, i - flag);
        }
        return output;
    }
};
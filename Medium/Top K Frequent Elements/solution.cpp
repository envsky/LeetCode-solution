class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<int> output;
        bool flag = false;
        int max = 0;
        for(int i=0; i<nums.size(); i++) {
            map[nums[i]]++;
            if(max<map[nums[i]])
                max = map[nums[i]];
        }
        vector<vector<int>> temp(max+1);
        for(auto& it : map) {
            temp[it.second].push_back(it.first);
        }
        for(int i=max; i>=1; i--) {
            for(int j=0; j<temp[i].size(); j++) {
                output.push_back(temp[i][j]);
                if(output.size() == k) {
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        return output;
    }
};
class Solution {
private:
    void getPermutation(vector<int>& nums, int start, vector<vector<int>>& output) {
        if(start == nums.size()) {
            output.push_back(nums);
            return;
        }
        for(int i=start; i<nums.size(); i++) {
            swap(nums[start], nums[i]);
            getPermutation(nums, start+1, output);
            swap(nums[start], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        getPermutation(nums, 0, output);
        return output;
    }
};
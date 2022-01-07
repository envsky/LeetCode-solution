class Solution {
public:
    int specialArray(vector<int>& nums) {
        int count;
        for(int i=1; i<=nums.size(); i++) {
            count = 0;
            for(int j=0; j<nums.size(); j++) {
                if(nums[j] >= i)
                    count ++;
            }
            if(count == 0)
                break;
            if(count == i)
                return i;
        }
        return -1;
    }
};
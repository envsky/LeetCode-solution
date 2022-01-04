class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long output = 0;
        unordered_map<double, int> map;
        double temp;
        for(int i=0; i<rectangles.size(); i++) {
            temp = (double)rectangles[i][0] / rectangles[i][1];
            output += map[temp];
		    map[temp]++;
        }
        return output;
    }
};
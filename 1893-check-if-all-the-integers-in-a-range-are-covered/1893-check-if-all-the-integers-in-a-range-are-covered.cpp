class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int diff[52] = {0};                    // 1..50, and 51 for r+1
        for (auto &seg : ranges) {
            diff[seg[0]]++;
            diff[seg[1] + 1]--;
        }
        int cover = 0;
        for (int x = 1; x <= 50; ++x) {
            cover += diff[x];
            if (x >= left && x <= right && cover == 0) return false;
            if (x == right) return true;
        }
        return true;
    }
};
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> count;
        vector<int> res;
        for (int num : nums) {
            count[num]++;
        }
        for (auto &p : count) {
            if (p.second == 2)
                res.push_back(p.first);
        }
        return res;
    }
};
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>cnt;
        vector<int>res;
        for(int num:nums){
            cnt[num]++;
        }
        for(auto &p:cnt){
            if(p.second==2) res.push_back(p.first);
        }
        return res;
    }
};
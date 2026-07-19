class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>freq;
        for(int x:nums){
            if(++freq[x]<=k){
                res.push_back(x);
            }
        }
        return res;
    }
};
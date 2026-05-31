class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        int n=nums.size();
        for(auto p:freq){
            if(p.second >n/2) return p.first;
        }
        return -1;
    }
};
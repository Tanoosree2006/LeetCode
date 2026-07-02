class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>freq;
        int count1=0;
        int count2=0;
        for(int x:nums){
            freq[x]++;
        }
        for(auto &it:freq){
            count1+=it.second/2;
            count2+=it.second%2;
        }
        return {count1,count2};
    }
};
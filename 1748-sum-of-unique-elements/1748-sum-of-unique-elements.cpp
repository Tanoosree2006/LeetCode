class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto p:freq){
            if(p.second==1) sum+=p.first;
        }
        return sum;
    }
};
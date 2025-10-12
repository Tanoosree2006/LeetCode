class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(int n:nums) count[n]++;
        int sum=0;
        for(auto &p:count) if(p.second%k==0) sum+=p.first*p.second;
        return sum;
    }
};
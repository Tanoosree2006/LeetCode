class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>freq(101,0);
        int cnt=0;
        for(int x:nums){
            cnt+=freq[x];
            freq[x]++;
        }
        return cnt;
    }
};
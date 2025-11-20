class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int cursum=0;
        for(int num:nums){
            cursum=max(num,cursum+num);
            maxsum=max(maxsum,cursum);
        }
        return maxsum;
    }
};
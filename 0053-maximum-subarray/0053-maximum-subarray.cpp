class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            maxsum=max(nums[i], maxsum + nums[i]);
            res=max(maxsum,res);
        }
        return res;
    }
};
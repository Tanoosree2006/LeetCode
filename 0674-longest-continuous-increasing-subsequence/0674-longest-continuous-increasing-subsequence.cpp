class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l=0;
        int r=1;
        int maxlen=1;
        while(r<nums.size()){
            if(nums[r]>nums[r-1]){
                maxlen=max(maxlen,r-l+1);
                r++;
            }
            else l=r,r++;
        }
        return maxlen;
    }
};
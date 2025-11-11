class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        
        for(int i = 0, pre = 0; i < nums.size(); i++) {
            ans[i] = pre;
            pre+= nums[i];
        }
        
        for(int i = nums.size()-1, pre = 0; i >= 0; i--) {
            ans[i] = abs(pre- ans[i]);
            pre+= nums[i];
        }

        return ans;
    }
};
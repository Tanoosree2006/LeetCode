class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=nums.size();
        vector<int>ans;
        for(int i=0;i<s;i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        if(ans.size()!=0){
            return {ans[0],ans[ans.size()-1]};
        }
        return {-1,-1};
    }
};
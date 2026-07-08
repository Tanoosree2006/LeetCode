class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int max_ele= INT_MIN;
        for(int i=0;i<n;i++){
            max_ele=max(max_ele,nums[i]);
        }
        int min_ele=0;
        for(int i=0;i<n;i++){
            min_ele+=max_ele-nums[i];
        }
        return min_ele;
    }
};
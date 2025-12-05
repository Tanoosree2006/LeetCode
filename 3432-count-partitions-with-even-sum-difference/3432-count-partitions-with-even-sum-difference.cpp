class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        long left = 0, right = 0;

        for(int i=0;i<n;i++){
            right+=nums[i];
        }

        for (int i = 0; i < n - 1; i++) {
            left += nums[i];
            right -= nums[i];
            if (((left - right) % 2) == 0)
                cnt++;
        }

        return cnt;
    }
};

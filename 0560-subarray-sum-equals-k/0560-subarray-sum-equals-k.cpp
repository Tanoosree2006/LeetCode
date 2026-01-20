class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n);

        // build prefix sum
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        int c = 0;

        // count subarrays using prefix sum
        for(int i = 0; i < n; i++){
            if(prefix[i] == k) c++;   // subarray from 0 to i

            for(int j = 0; j < i; j++){
                if(prefix[i] - prefix[j] == k)
                    c++;
            }
        }

        return c;
    }
};

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windsum=0;
        for(int i=0;i<k;i++){
            windsum+=nums[i];
        }
        int maxsum=windsum;
        for(int i=k;i<nums.size();i++){
            windsum+=nums[i];
            windsum-=nums[i-k];
            maxsum=max(maxsum,windsum);
        }
        double avg=(double)maxsum/k;
        return avg;
    }
};
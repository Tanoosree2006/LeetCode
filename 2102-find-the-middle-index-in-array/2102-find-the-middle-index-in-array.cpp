class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            int sums=0;
            for(int j=0;j<i;j++) sum+=nums[j];
            for(int j=i+1;j<n;j++) sums+=nums[j];
            if(sum==sums) return i;
        }
        return -1;
    }
};
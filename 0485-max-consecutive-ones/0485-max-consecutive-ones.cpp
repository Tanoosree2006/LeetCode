class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxcnt=0;
        int currentcnt=0;
        for(int i=0;i<n;i++){
                if(nums[i]==1){
                currentcnt++;
                maxcnt=max(maxcnt,currentcnt);
            }else currentcnt=0;
        }
        return maxcnt;
    }
};
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int counter=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[k]-nums[j] == diff && nums[j]-nums[i]==diff)
                    counter++;
                }
            }
        }
        return counter;
    }
};
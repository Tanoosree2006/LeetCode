class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_map<float,int> m;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0 , j = n-1; i<j; i){
            float k = (nums[i]+nums[j])/2.0;
            m[k]++;
            i++;
            j--;
        } 
        return m.size();
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long sq=nums[i]*nums[i];
            res.push_back(sq);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
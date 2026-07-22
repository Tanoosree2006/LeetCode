class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>freq;
        int mx=0,ans=-1;
        for(int x:nums){
            if(x%2==0) freq[x]++;
        }
        for(auto it:freq){
            if(it.second>mx){
                mx=it.second;
                ans=it.first;
            }
            else if(it.second==mx && it.first<ans){
                ans=it.first;
            }
        }
        return ans;
    }
};
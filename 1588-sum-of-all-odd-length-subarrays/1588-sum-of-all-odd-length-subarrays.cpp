class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int cursum=0;
            for(int j=i;j<n;j++){
                cursum+=arr[j];
                ans+=(j-i+1)%2==1 ? cursum:0;
            }
        }
        return ans;
    }
};
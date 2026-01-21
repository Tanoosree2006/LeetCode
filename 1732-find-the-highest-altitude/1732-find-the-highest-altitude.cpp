class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>prefix(gain.size()+1);
        prefix[0]=0;
        int res=0;
        for(int i=1;i<=gain.size();i++){
            prefix[i]=prefix[i-1]+gain[i-1];
            res=max(prefix[i],res);
        }
        return res;
    }
};
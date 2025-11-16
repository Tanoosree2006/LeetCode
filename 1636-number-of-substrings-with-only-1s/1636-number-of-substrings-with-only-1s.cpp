class Solution {
public:
    int numSub(string s) {
        int ans=0;
        long long mod=1e9+7;
        int count=0;
        for(char c:s){
            if(c=='0'){
            ans=(ans+(long long)count*(count+1)/2%mod);
            count=0;
            }
        else  count++;
        }
        ans=(ans+(long long)count*(count+1)/2%mod);
        return ans;
    }
};
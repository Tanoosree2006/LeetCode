class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sumAbs=0;
        int negCount=0;
        int minAbs=INT_MAX;
        for(auto &row: matrix){
            for(int val:row){
                sumAbs+=abs(val);
                if(val<0) negCount++;
                minAbs=min(minAbs,abs(val));
            }
        }
        if(negCount %2==1){
            sumAbs-=2LL*minAbs;
        }
        return sumAbs;
    }
};
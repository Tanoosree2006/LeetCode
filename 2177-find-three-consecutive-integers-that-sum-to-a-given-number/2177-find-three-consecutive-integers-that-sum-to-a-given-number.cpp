class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long res=num/3;
        if((res-1)+res+(res+1)==num) return {res-1,res,res+1};
        return {};
    }
};
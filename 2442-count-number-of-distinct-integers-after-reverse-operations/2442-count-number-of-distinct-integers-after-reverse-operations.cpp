class Solution {
public:
    int revnum (int n){
        int rev=0;
        while(n>0){
            rev=rev*10+(n%10);
            n/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x:nums){
            s.insert(x);
            s.insert(revnum(x));
        }
        return s.size();
    }
};
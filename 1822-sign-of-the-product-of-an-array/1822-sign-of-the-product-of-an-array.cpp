class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cont=0;
        for(int x:nums){
            if(x<0) cont++;
            if(x==0) return 0;
        }
        if(cont%2==0) return 1;
        return -1;
    }
};
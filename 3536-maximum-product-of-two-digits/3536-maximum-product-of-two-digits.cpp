class Solution {
public:
    int maxProduct(int n) {
        int mx=INT_MIN;
        int pro=1;
        vector<int>res;
        while(n>0){
            res.push_back(n%10);
            n/=10;
        }
        for(int i=0;i<res.size();i++){
            for(int j=i+1;j<res.size();j++){
            pro=res[i]*res[j];
            mx=max(mx,pro);
            }
        }
        return mx;
    }
};
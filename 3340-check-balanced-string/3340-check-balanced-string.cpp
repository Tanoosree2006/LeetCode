class Solution {
public:
    bool isBalanced(string num) {
        int n=num.size();
        int sum=0,sum2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum+=num[i]-'0';
            }
            else sum2+=num[i]-'0';
        }
        return sum==sum2;
    }
};
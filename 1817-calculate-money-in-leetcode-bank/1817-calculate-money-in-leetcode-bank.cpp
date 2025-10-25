class Solution {
public:
    int totalMoney(int n) {
        int x = n/7;
        int m = n%7;
        int sum = 0;
        sum = (28*x)+7*((x*(x-1))/2);
        for(int i = 1, val = x+1; i <= m; i++, val++) sum += val;
        return sum;
    }
};
class Solution {
public:
    int division (int n){
        int product=1;
        while(n>1){
            product*=n%10;
            n/=10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(division(n)%t!=0) {
            n++;
        }
        return n;
    }
};
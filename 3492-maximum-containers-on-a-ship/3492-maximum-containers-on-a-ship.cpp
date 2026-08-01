class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        long long a=n*n,b=a*w;
        return (maxWeight >b)?a:maxWeight/w;
    }
};
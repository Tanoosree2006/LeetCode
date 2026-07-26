class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxheap;
        for(int x:stones){
            maxheap.push(x);
        }
        while(maxheap.size()>1){
            int first=maxheap.top();
            maxheap.pop();
            int second=maxheap.top();
            maxheap.pop();
            if(second<first){
                maxheap.push(first-second);
            }
        }
        maxheap.push(0);
        return maxheap.top();
    }
};
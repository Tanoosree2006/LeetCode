class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>minheap;
        vector<int>res;
        for(int x:nums){
            minheap.push(x);
        }
        while(!minheap.empty()){
            int ali=minheap.top();
            minheap.pop();
            int bob=minheap.top();
            minheap.pop();
            res.push_back(bob);
            res.push_back(ali);
        }
        return res;
    }
};
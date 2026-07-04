class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans=INT_MAX,idx=-1;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize && capacity[i]<ans){
                ans=capacity[i];
                idx=i;
            }
        }
        return idx;
    }
};
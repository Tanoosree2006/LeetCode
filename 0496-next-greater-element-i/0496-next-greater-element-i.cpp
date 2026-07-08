class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            int target=nums1[i];
            int nextgreater =-1;
            bool found=false;
            
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==target){
                    found=true;
                }
                else if (found && nums2[j]>target){
                    nextgreater=nums2[j];
                    break;
                }
            }
            res.push_back(nextgreater);
        }
        return res;
    }
};
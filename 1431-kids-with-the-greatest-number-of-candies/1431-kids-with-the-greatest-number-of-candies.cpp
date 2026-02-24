class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxcandies=candies[0];
        vector<bool>arr;
        for(int i=0;i<n;i++){
            if(candies[i]>maxcandies){
                maxcandies=candies[i];
            }
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies<maxcandies){
                arr.push_back(false);
            }
            else {
                arr.push_back(true);
            }
        }
        return arr;
    }
};
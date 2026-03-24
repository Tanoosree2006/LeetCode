class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        int n=list1.size();
        int m=list2.size();
        int minsum=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(list1[i]==list2[j]){
                    if(i+j<minsum){
                        result.clear();
                        result.push_back(list1[i]);
                        minsum=i+j;
                    }
                    else if(i+j==minsum){
                        result.push_back(list1[i]);
                    }
                }
            }
        }
        return result;
    }
};
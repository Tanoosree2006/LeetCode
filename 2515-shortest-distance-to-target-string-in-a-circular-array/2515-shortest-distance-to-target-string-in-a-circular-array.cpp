class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int mindist=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int forwarddist=abs(i-startIndex);
                int backwarddist=n-forwarddist;
                mindist=min(mindist,min(forwarddist,backwarddist));
            }
        }
        return mindist==INT_MAX?-1:mindist;
    }
};
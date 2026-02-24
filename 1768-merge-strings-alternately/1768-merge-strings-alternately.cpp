class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        int i=0;
        string ans;
        ans.reserve(n1+n2);
        while(i<n1||i<n2){
            if(i<n1) ans.push_back(word1[i]);
            if(i<n2) ans.push_back(word2[i]);
            i++;
        }
        return ans;
    }
};
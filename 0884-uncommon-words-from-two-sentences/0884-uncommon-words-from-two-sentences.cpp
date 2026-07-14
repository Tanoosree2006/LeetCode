class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>freq;
        string word;
        stringstream ss1(s1);
        while(ss1 >> word){
            freq[word]++;
        }
        stringstream ss2(s2);
        while(ss2 >>word){
            freq[word]++;
        }
        vector<string>res;
        for(auto it:freq){
            if(it.second==1) res.push_back(it.first);
        }
        return res;
    }
};
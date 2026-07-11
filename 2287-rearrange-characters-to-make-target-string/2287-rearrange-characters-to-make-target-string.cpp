class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>tfreq{},sfreq{};
        for(auto x:target){
            tfreq[x]++;
        }
        for(auto x:s){
            sfreq[x]++;
        }
        int mn=INT_MAX;
        for(pair<char,int>p:tfreq){
            mn=min(mn,sfreq[p.first]/p.second);
        }
        return mn;        
    }
};
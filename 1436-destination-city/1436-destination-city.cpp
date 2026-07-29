class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mp;
        for(auto &x:paths){
            mp[x[0]]++;
            mp[x[1]]--;
        }
        for(auto y:mp){
            if(y.second==-1) return y.first;
        }
        return "";
    }
};
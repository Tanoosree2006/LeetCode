class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>mp;
        unordered_map<int,int>freq;
        for(int x:arr){
            freq[x]++;
        }
        for(auto x:freq){
            mp.push_back(x.second);
        }
        sort(mp.begin(),mp.end());
        for(int i=0;i<mp.size()-1;i++){
            if(mp[i]==mp[i+1]) return false;
        }
        return true;
    }
};
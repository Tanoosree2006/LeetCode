class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string x;
        while(ss>>x){
            words.push_back(x);
        }
        reverse(words.begin(),words.end());
        string ans="";
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(i!=words.size()-1) ans+=" ";
        }
        return ans;
    }
};
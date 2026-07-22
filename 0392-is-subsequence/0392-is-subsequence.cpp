class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(char x:t){
            if(x==s[j]) j++;
            if(j==s.length()) break;
        }
        return j==s.length();
    }
};
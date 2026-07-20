class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==y){
                swap(s[i],s[idx]);
                idx++;
            }
        }
        return s;
    }
};
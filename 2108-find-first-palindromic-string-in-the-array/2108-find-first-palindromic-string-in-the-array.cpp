class Solution {
public:
    bool ispalin(string &s){
        int left=0,right=s.size()-1;
        while(left<right){
                if(s[left]!=s[right]) return false;
                left++,right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(ispalin(s)) return s;
        }
        return "";
    }
};
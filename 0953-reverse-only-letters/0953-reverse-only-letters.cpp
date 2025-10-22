class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if((s[i] >=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)){
                st.push(s[i]);
            }
        }
        int j=0;
        while(!st.empty()){
            if((s[j]>=97 && s[j]<=122)||(s[j]>=65 && s[j]<=90)){
                s[j]=st.top();
                st.pop();
            }
            j++;
        }
        return s;
    }
};
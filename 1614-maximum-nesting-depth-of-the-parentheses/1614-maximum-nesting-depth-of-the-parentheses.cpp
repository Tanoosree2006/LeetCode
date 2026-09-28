class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0;
        for(char x:s){
            if(x=='('){
                st.push(x);
                ans=max(ans,(int)st.size());
            }
            else if(x==')') st.pop();
        }
        return ans;
    }
};
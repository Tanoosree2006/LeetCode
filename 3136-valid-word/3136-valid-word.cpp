class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3) return false;

        bool vow=false;
        bool con=false;

        for(auto s:word){
            if(isalpha(s)){
                s=tolower(s);
                if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')  vow=true;
                else  con=true;
            }
            else if (!isdigit(s)){
                return false;
            }
        }
        return vow && con;
    }
};
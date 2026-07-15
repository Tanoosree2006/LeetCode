class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> v;
        for (string s : words) {
            string str = "";
            for (char c : s) {
                if (c == separator) {
                    if (str != "")
                        v.push_back(str);
                    str = "";
                }
                else {
                    str += c;
                }
            }
            if (str != "")
                v.push_back(str);
        }
        return v;
    }
};
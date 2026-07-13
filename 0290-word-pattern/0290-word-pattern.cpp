class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word)
            words.push_back(word);

        if (words.size() != pattern.size())
            return false;

        int n = pattern.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                // Same pattern characters must have same words
                if (pattern[i] == pattern[j]) {
                    if (words[i] != words[j])
                        return false;
                }

                // Different pattern characters must have different words
                else {
                    if (words[i] == words[j])
                        return false;
                }
            }
        }

        return true;
    }
};
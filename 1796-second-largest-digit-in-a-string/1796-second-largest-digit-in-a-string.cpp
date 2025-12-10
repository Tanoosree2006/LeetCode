class Solution {
public:
    int secondHighest(string s) {
        vector<int> arr;
        for (auto it : s) {
            if (isdigit(it)) {      
                arr.push_back(it - '0');
            }
        }
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        if (arr.size() >= 2)
            return arr[arr.size() - 2];
        return -1;
    }
};
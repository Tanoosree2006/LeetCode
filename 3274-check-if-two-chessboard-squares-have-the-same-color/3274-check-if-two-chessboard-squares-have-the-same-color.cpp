class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int x=(coordinate1[0]-'a'+1)+(coordinate1[1]);
        int y=(coordinate2[0]-'a'+1)+(coordinate2[1]);
        if((x%2==0 && y%2==0) || (x%2!=0 && y%2!=0)) return true;
        return false;
    }
};
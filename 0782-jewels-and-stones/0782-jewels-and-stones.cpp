class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int cnt=0;
       for(char j:jewels){
        for(char s:stones){
            if(j==s) cnt++;
        }
       }
       return cnt;
    }
};
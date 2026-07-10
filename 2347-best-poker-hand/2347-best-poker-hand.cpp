class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool flush=true;
        for(int i=1;i<5;i++){
            if(suits[i]!=suits[0]){
                flush=false;
                break;
            }
        }
        if(flush) return "Flush";
        vector<int>freq(14,0);
        for(int x:ranks){
            freq[x]++;
        }
        for(int x:freq){
            if(x>=3) return "Three of a Kind";
        }
        for(int x:freq){
            if(x>=2) return "Pair";
        }
        return "High Card";
    }
};
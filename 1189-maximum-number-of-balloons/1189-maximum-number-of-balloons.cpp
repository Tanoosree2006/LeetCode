class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        for(char x: text){
            if (x=='b') b++;
            else if (x=='a')a++;
            else if (x=='l') l++;
            else if (x=='o') o++;
            else if (x=='n') n++;
        }
        return min({b,a,l/2,o/2,n});
    }
};


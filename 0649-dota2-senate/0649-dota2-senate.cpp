class Solution {
public:
    string predictPartyVictory(string senate) {
        int score=0;
        for(int i=0;i<senate.size();i++){
            int s=senate[i];
            if(s=='R'){
                if(score<0) senate.push_back('D');
                score++;
            }
            else if(s=='D'){
                if(score>0) senate.push_back('R');
                score--;
            }
        }
        return score>0 ? "Radiant" : "Dire";
    }
};
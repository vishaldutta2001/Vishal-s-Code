class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        //even to even jump no cost
        //odd to odd jump no cost
        //count even position and odd position
        //than return min(evenCnt,oddCnt)
        int evenCnt=0,oddCnt=0;
        int res;
        for(int i=0;i<position.size();i++){
            if(position[i]%2==0){
                evenCnt++;
            }
            else{
                oddCnt++;
            }
        }
        res=evenCnt>oddCnt ? oddCnt : evenCnt;
        return res;
    }
};
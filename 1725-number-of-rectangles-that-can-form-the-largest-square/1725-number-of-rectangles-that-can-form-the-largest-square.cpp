class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int cnt=0; int comp=0;
        for(int i=0;i<rectangles.size();i++){
            int l=rectangles[i][0], w=rectangles[i][1];
            int data=min(l,w);
            if(comp<data){
                comp=data;
                cnt=1;
            }else if(comp==data){
                cnt++;
            }
        }
        return cnt;
    }
};
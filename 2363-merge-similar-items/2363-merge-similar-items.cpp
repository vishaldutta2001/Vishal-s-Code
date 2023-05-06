class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        map<int, int> m;
        for(int i=0;i<items1.size();i++){
            m[items1[i][0]]=items1[i][1];
        }
        for(int j=0;j<items2.size();j++){
            if(m.find(items2[j][0]) != m.end()){
                m[items2[j][0]]+=items2[j][1];
            }
            else{
                m[items2[j][0]]=items2[j][1];
            }
        }
        for(auto it:m){
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};
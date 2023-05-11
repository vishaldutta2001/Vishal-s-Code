class Solution {
    int binary(vector<int> A){
        int s=0,e=A.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(A[mid]==0){
                e=mid-1;
            }else if(A[mid]==1){
                s=mid+1;
            }
        }
        return s;
    }
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> p;//storing pairs of count and their index
        int m=mat.size();
        vector<int> res;
        for(int i=0;i<m;i++){
            int cnt=binary(mat[i]);
            p.push_back({cnt,i});
        }
        sort(p.begin(),p.end());
        for(int i=0;i<k;i++){
            res.push_back(p[i].second);
        }
        return res;
    }
};
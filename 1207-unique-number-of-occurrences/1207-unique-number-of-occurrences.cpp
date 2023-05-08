class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        set<int> s;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto it:m){
            s.insert(it.second);
        }
        return s.size()==m.size() ? true : false;
    }
};
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string res="";
        map<string,int> m;
        for(string el:arr){
            m[el]++;
        }
        for(string el:arr){
            if(m[el]==1 && --k==0){
                return el;   
            }
        }
        return res;
    }
};
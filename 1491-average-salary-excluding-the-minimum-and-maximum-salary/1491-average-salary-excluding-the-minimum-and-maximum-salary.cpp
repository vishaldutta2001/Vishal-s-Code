class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0, min=INT_MAX, max=INT_MIN;
        double res;
        for(auto sal:salary){
            if(min>sal) min=sal;
            if(max<sal) max=sal;
            sum+=sal;
        }
        res=double(sum-(min+max))/(salary.size()-2);
        return res;
    }
};
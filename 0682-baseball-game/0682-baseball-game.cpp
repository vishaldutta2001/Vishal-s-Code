class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> records;
        int index=-1;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                sum-=records[index];
                records.pop_back();
                index--;
            }
            else if(operations[i]=="D"){
                sum+=2*records.back();
                records.push_back(2*records.back());
                index++;
            }
            else if(operations[i]=="+"){
                sum+=records[index]+records[index-1];
                records.push_back(records[index]+records[index-1]);
                index++;
                
            }
            else{
                sum+=stoi(operations[i]);
                records.push_back(stoi(operations[i]));
                index++;
            }
        }
       return sum; 
    }
    
};
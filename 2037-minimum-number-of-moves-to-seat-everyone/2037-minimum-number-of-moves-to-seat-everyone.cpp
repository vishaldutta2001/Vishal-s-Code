class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int op=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i=0;
        while(i<seats.size()){
            if(seats[i]==students[i]){
                i++;
            }
            else if(seats[i]>students[i]){
                students[i]+=1;
                op++;
            }
            else{
                students[i]-=1;
                op++;
            }
        }
        return op;
    }
};
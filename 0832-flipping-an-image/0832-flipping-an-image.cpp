class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int s=0,e=image[i].size()-1;
            while(s<e){
                swap(image[i][s],image[i][e]);
                s++,e--;
            }
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                image[i][j]=image[i][j]==0 ? 1 : 0;
            }
        }
        return image;
    }
};
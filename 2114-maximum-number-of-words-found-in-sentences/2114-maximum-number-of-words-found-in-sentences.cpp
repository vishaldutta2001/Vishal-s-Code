class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int words=0;
        for(int i=0;i<sentences.size();i++){
            string sentence=sentences[i];
            int cnt=1;
            for(int j=0;j<sentence.size();j++){
                if(sentence[j]==' ' ){
                    cnt++;
                }
            }
            if(words<cnt){
                words=cnt;
            }
        }
        return words;
    }
};
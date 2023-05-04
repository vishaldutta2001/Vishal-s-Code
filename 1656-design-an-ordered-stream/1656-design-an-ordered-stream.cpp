class OrderedStream {
    vector<string> d;
    int ptr;
public:
    OrderedStream(int n) {
        d.resize(n);
        ptr=1;
    }
    
    vector<string> insert(int idKey, string value) {
        // d.insert(d.begin()+idKey-1,value);
        d[idKey-1]=value;
        vector<string> ans;
        
        if(ptr==idKey){
            int i=idKey-1;
            while(i<d.size()){
                if(d[i]==""){
                    break;
                }
                ans.push_back(d[i]);
                i++;
            }
            ptr=i+1;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
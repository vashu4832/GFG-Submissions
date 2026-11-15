class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> c;
        for(int i=0; i<a.size(); i++){
            c.push_back(a[i]);
        }
        for(int i=0; i<b.size(); i++){
            c.push_back(b[i]);
        }
        
        set<int> s;
        for(int i=0; i<c.size(); i++){
            s.insert(c[i]);
        }
        
        vector<int> ans;
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
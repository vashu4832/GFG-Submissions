class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        set<int> s;
        for(int i=0; i<arr.size(); i++){
            s.insert(arr[i]);
        }
        
        if(s.size() < 2){
            return -1;
        }
        
        auto it = s.rbegin();
        it++;
        
        return *it;
    }
};
class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        d = d % arr.size();
        vector<int> temp;
        for(int i=0; i<d; i++){
            temp.push_back(arr[i]);
        }
        
        for(int i=d; i<arr.size(); i++){
            arr[i-d] = arr[i];
        }
        
        for(int i=0; i<temp.size(); i++){
            arr[arr.size()-d+i] = temp[i];
        }
        
    }
};
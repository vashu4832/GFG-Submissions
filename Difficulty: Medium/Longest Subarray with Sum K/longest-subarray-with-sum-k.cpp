class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<long long, int> preSumMap;
        long long sum = 0;
        int len = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum == k){
                len = max(len, i+1);
            }
            int rem = sum - k;
            if(preSumMap.find(rem) != preSumMap.end()){
                int newLen = i - preSumMap[rem];
                len = max(len, newLen);
            }
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] =  i;
            }
            
        }
        return len;
    }
};
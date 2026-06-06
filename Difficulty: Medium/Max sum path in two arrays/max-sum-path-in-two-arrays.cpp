class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        int i = 0, j = 0;
        int sum1 = 0, sum2 = 0, result = 0;

        int n1 = arr1.size(), n2 = arr2.size();

        while (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) {
                sum1 += arr1[i++];
            }
            else if (arr1[i] > arr2[j]) {
                sum2 += arr2[j++];
            }
            else {
                // Common element: take the better path, add element once
                result += max(sum1, sum2) + arr1[i];
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }

        // Exhaust remaining elements
        while (i < n1) sum1 += arr1[i++];
        while (j < n2) sum2 += arr2[j++];

        // Add the better tail
        result += max(sum1, sum2);

        return result;
    }
};
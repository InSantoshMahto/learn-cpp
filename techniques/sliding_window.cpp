/**
 * Sliding Window Technique
 * Given an array of integers and a number k, find the maximum sum of a subarray of size k.
 *
 * Example:
 * Input: arr = [5, 2, -1, 0, 3], k = 3
 * Output: 6
 * Explanation: The subarray with the maximum sum of size 3 is [5, 2, -1] with a sum of 6.
 *
 * How to run the code: clang++ -std=c++23 ./sliding_window.cpp -o main && ./main
 */
#include <iostream>
#include <vector>

using namespace std;

int maxSum(vector<int>& arr, int k) {

    int sumWindow = 0;
    for (int i = 0; i < k; i++) {
        sumWindow += arr[i];
    }
    int maxSum = sumWindow;

    int n = arr.size();
    for (int i = k; i < n; i++) {
        sumWindow += arr[i] - arr[i - k];
        maxSum = max(maxSum, sumWindow);
    }
    return maxSum;
}

int main() {
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;

    cout << maxSum(arr, k) << endl;
    return 0;
}

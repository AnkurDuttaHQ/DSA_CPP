#include<iostream>
#include<climits>
using namespace std;

int kedanes_algorithm(int arr[], int n) {
    int max_sum = INT_MIN; // Initialize max_sum to the smallest integer value
    int current_sum = 0; // Initialize current_sum to 0

    for (int i = 0; i < n; i++) {
        current_sum += arr[i]; // Add the current element to current_sum
        if (current_sum > max_sum) {
            max_sum = current_sum; // Update max_sum if current_sum is greater
        }
        if (current_sum < 0) {
            current_sum = 0; // Reset current_sum to 0 if it becomes negative
        }
    }
    return max_sum; // Return the maximum subarray sum found
}

int main() {
    int arr[5] = {1, -2, -3, -4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "Maximum subarray sum using Kadane's algorithm is " << kedanes_algorithm(arr, n) << endl; // Print the maximum subarray sum
}

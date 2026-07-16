#include<iostream>
#include<climits>
using namespace std;

// Trapping Rain Water Problem
int trapRainWater(int height[], int n) {
    int left_max[n], right_max[n];
    int water_trapped = 0;

    // Fill left_max array
    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }

    // Fill right_max array
    right_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(right_max[i + 1], height[i]);
    }

    // Calculate water trapped
    for (int i = 0; i < n; i++) {
        water_trapped += min(left_max[i], right_max[i]) - height[i];
    }

    return water_trapped;
}

int main() {
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);
    cout << "Total water trapped is " << trapRainWater(height, n) << endl; // Print the total water trapped
}
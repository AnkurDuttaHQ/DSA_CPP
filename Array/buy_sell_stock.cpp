#include<iostream>
#include<climits>
using namespace std;

int buy_sell_stock(int arr[], int n) {
    int min_price = INT_MAX; // Initialize min_price to the largest integer value
    int max_profit = 0; // Initialize max_profit to 0

    for (int i = 0; i < n; i++) {
        if (arr[i] < min_price) {
            min_price = arr[i]; // Update min_price if current price is lower
        } else {
            int profit = arr[i] - min_price; // Calculate profit if selling at current price
            if (profit > max_profit) {
                max_profit = profit; // Update max_profit if current profit is greater
            }
        }
    }
    return max_profit; // Return the maximum profit found
}

int main() {
    int arr[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << "Maximum profit from buying and selling stock is " << buy_sell_stock(arr, n) << endl; // Print the maximum profit
}
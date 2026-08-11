#include <iostream>
using namespace std;

void printOccur(int arr[], int n, int key, int idx) {

    // Base case
    if (idx == n) {
        return;
    }

    // If current element matches key
    if (arr[idx] == key) {
        cout << idx << endl;
    }

    // Recursive call
    printOccur(arr, n, key, idx + 1);
}

int main() {

    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    printOccur(arr, n, 2, 0);

    return 0;
}
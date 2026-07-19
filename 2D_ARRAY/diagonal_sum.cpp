#include<iostream>
using namespace std;

// calculate diagonal sum

void diagonalsum(int matrix[4][4], int rows, int cols) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < rows; i++) {
        primaryDiagonalSum += matrix[i][i]; // Sum of primary diagonal
        secondaryDiagonalSum += matrix[i][cols - 1 - i]; // Sum of secondary diagonal
    }

    cout << "Primary Diagonal Sum: " << primaryDiagonalSum << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiagonalSum << endl;
}

int main(){
    int arr[4][4]={{1,3,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    diagonalsum(arr,4,4);
}
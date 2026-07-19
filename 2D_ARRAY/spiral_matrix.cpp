#include<iostream>
using namespace std;

void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void spiralOrder(int **matrix, int rows , int  cols){
    int srow = 0, sCol = 0;
    int erow = rows - 1, eCol = cols - 1;

    // Loop until the starting row is less than or equal to the ending row and the starting column is less than or equal to the ending column
    while (srow <= erow && sCol <= eCol) {
        // Print the top row
        for (int i = sCol; i <= eCol; i++) {
            cout << matrix[srow][i] << " ";
        }
        srow++;

        // Print the right column
        for (int i = srow; i <= erow; i++) {
            cout << matrix[i][eCol] << " ";
        }
        eCol--;

        // Print the bottom row if there are remaining rows
        if (srow <= erow) {
            for (int i = eCol; i >= sCol; i--) {
                cout << matrix[erow][i] << " ";
            }
            erow--;
        }

        // Print the left column if there are remaining columns
        if (sCol <= eCol) {
            for (int i = erow; i >= srow; i--) {
                cout << matrix[i][sCol] << " ";
            }
            sCol++;
        }
        
    }

    
}

int main() {
    int rows = 3, cols = 3;
    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Initialize the matrix
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix, rows, cols);

    cout << "Spiral Order:" << endl;
    spiralOrder(matrix, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
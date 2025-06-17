//Implement Strassen’s matrix multiplication.
#include <stdio.h>

// Function to add two matrices
void add(int n, int A[][n], int B[][n], int C[][n]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}

// Function to subtract two matrices
void subtract(int n, int A[][n], int B[][n], int C[][n]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
}

// Function to perform Strassen's matrix multiplication
void strassen(int n, int A[][n], int B[][n], int C[][n]) {
    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }
// Create sub matrices
    int newSize = n / 2;
    int A11[newSize][newSize], A12[newSize][newSize],
            A21[newSize][newSize], A22[newSize][newSize];
    int B11[newSize][newSize], B12[newSize][newSize],
            B21[newSize][newSize], B22[newSize][newSize];
    int C11[newSize][newSize], C12[newSize][newSize],
            C21[newSize][newSize], C22[newSize][newSize];
// Split matrices into quadrants
    for (int i = 0; i < newSize; i++)
        for (int j = 0; j < newSize; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + newSize];
            A21[i][j] = A[i + newSize][j];
            A22[i][j] = A[i + newSize][j + newSize];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + newSize];
            B21[i][j] = B[i + newSize][j];
            B22[i][j] = B[i + newSize][j + newSize];
        }
// Strassen's sub problems
    int P1[newSize][newSize], P2[newSize][newSize],
            P3[newSize][newSize], P4[newSize][newSize];
    int P5[newSize][newSize], P6[newSize][newSize],
            P7[newSize][newSize];
    subtract(newSize, B12, B22, P1);
    add(newSize, A11, A12, P2);
    add(newSize, A21, A22, P3);
    subtract(newSize, B21, B11, P4);
    add(newSize, A11, A22, P5);
    add(newSize, B11, B22, P6);
    subtract(newSize, A12, A22, P7);
// Recursive calls
    int Q1[newSize][newSize], Q2[newSize][newSize],
            Q3[newSize][newSize], Q4[newSize][newSize];
    strassen(newSize, A11, P1, Q1);
    strassen(newSize, P2, B22, Q2);
    strassen(newSize, P3, B11, Q3);
    strassen(newSize, A22, P4, Q4);
    add(newSize, Q1, Q2, C11);
    subtract(newSize, Q1, Q3, C12);
    subtract(newSize, Q2, Q4, C21);
    add(newSize, Q3, Q4, C22);
// Combine results
    for (int i = 0; i < newSize; i++)
        for (int j = 0; j < newSize; j++) {
            C[i][j] = C11[i][j];
            C[i][j + newSize] = C12[i][j];
            C[i + newSize][j] = C21[i][j];
            C[i + newSize][j + newSize] = C22[i][j];
        }
}

// Function to print a matrix
void printMatrix(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 4; // Change this to the desired matrix size
// Test matrices
    int A[4][4] = {
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9,  10, 11, 12},
            {13, 14, 15, 16}
    };
    int B[4][4] = {
            {17, 18, 19, 20},
            {21, 22, 23, 24},
            {25, 26, 27, 28},
            {29, 30, 31, 32}
    };
    int C[n][n]; // Result matrix for Strassen's multiplication
// Perform Strassen's matrix multiplication
    strassen(n, A, B, C);
// Print the result
    printf("Strassen's Matrix Multiplication Result:\n");
    printMatrix(n, C);
    return 0;
}
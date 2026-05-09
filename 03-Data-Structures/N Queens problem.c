//Implement N Queen's problem using Back Tracking.
#include <stdio.h>
#include <stdbool.h>

#define N 8 // Change N to the desired board size

// Function to print the chessboard
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", board[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");
}
// Function to check if it's safe to place a queen at board[row][col]
bool isSafe(int board[N][N], int row, int col) {
// Check the row on the left side
    for (int i = 0; i < col; i++) {
        if (board[row][i])
            return false;
    }
// Check upper diagonal on the left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return false;
    }
// Check lower diagonal on the left side
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j])
            return false;
    }
    return true;
}
// Function to solve N-Queens problem using backtracking
bool solveNQueensUtil(int board[N][N], int col) {
// All queens are placed successfully, print the solution
    if (col == N) {
        printBoard(board);
        return true;
    }
    bool res = false;
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1; // Place queen
// Recur to place rest of the queens
            res = solveNQueensUtil(board, col + 1) || res;
// If placing queen in the current position doesn't lead toa solution,
// then remove the queen from the current position
            (backtrack)
                    board[i][col] = 0;
        }
    }
    return res;
}

// Main function to solve N-Queens problem
void solveNQueens() {
    int board[N][N] = {{0}};
    if (!solveNQueensUtil(board, 0)) {
        printf("Solution does not exist.\n");
    }
}

// Driver program to test above function
int main() {
    solveNQueens();
    return 0;
}

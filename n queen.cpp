#include <stdio.h>
#include <stdbool.h>

#define N 10

int board[N][N];

bool attack(int i, int j) {
    // Checking vertically and horizontally
    for (int k = 0; k < N; k++) {
        if (board[i][k] == 1 || board[k][j] == 1) {
            return true;
        }
    }
    // Checking diagonally
    for (int k = 0; k < N; k++) {
        for (int l = 0; l < N; l++) {
            if ((k + l == i + j) || (k - l == i - j)) {
                if (board[k][l] == 1) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool N_queens(int n) {
    if (n == 0) {
        return true;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((!attack(i, j)) && (board[i][j] != 1)) {
                board[i][j] = 1;
                if (N_queens(n - 1)) {
                    return true;
                }
                board[i][j] = 0;
            }
        }
    }
    return false;
}

int main() {
    printf("Enter the number of queens: ");
    int queens;
    scanf("%d", &queens);

    // Initialize the board to 0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }

    // Solve N-Queens problem
    N_queens(queens);

    // Print the board
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
	}
	printf("\n");}
}

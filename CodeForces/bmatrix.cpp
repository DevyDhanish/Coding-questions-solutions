#include <iostream>
#include <cmath>

int main() {
    // Read the input matrix
    int matrix[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int row_moves = 0, col_moves = 0;

    // Find the coordinates of the number one
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matrix[i][j] == 1) {
                row_moves = std::abs(i - 2);  // Number of row moves to the third row
                col_moves = std::abs(j - 2);  // Number of column moves to the third column
                break;
            }
        }
    }

    // Calculate the minimum number of moves
    int min_moves = row_moves + col_moves;

    // Print the result
    std::cout << min_moves << std::endl;

    return 0;
}
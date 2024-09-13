// Su-Do-Ku Puzzle – A Sudoku is a problem where there are is an incomplete 9 x 9 table of numbers which must be filled according to
// several rules:
//  Within any of the 9 individual 3 x 3 boxes, each of the numbers 1 to 9 must be found.
//  Within any column of the 9 x 9 grid, each of the numbers 1 to 9 must be found.
//  Within any row of the 9 x 9 grid, each of the numbers 1 to 9 must be found.

#include <iostream>
#include <vector>

#define SIZE 9

// Function to print the Sudoku grid
void printGrid(const std::vector<std::vector<int>>& grid) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to check if placing num in grid[row][col] is valid
bool isValid(const std::vector<std::vector<int>>& grid, int row, int col, int num) {
    // Check if num is not repeated in the current row
    for (int x = 0; x < SIZE; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }

    // Check if num is not repeated in the current column
    for (int x = 0; x < SIZE; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Check if num is not repeated in the current 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to solve the Sudoku puzzle using backtracking
bool solveSudoku(std::vector<std::vector<int>>& grid) {
    int row, col;
    bool empty = false;

    // Find an empty cell
    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (grid[row][col] == 0) {
                empty = true;
                break;
            }
        }
        if (empty) break;
    }

    // If no empty cell is found, Sudoku is solved
    if (!empty) {
        return true;
    }

    // Try placing numbers 1 to 9 in the empty cell
    for (int num = 1; num <= SIZE; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid)) {
                return true;
            }

            // If placing num does not lead to a solution, reset the cell and backtrack
            grid[row][col] = 0;
        }
    }

    return false;
}

int main() {
    // Example Sudoku puzzle
    std::vector<std::vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(grid)) {
        std::cout << "Solved Sudoku grid:" << std::endl;
        printGrid(grid);
    } else {
        std::cout << "No solution exists." << std::endl;
    }

    return 0;
}
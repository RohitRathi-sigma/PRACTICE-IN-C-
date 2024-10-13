// Conway Game of Life - The project introduces the learner to the challenge of implementing a two-dimensional array when the vast majority of the elements are empty, or they are zero. This has the learners explore how best to implement a sparse matrix, tests the implementation using the Conway's Game of Life and determines which is best. Implement various operations of Stack.

#include <iostream>
#include <vector>
using namespace std;
class SparseMatrixArray {
private:
    struct Element {
        int row;
        int col;
        int value;
    };
    vector<Element> elements;
    int rowCount, colCount;
public:
    SparseMatrixArray(int rows, int cols) : rowCount(rows), colCount(cols) {}
    void insert(int r, int c, int val) {
        if (val != 0) {
            elements.push_back({r, c, val});
        }
    }
    int get(int r, int c) const {
        for (const auto &el : elements) {
            if (el.row == r && el.col == c) {
                return el.value;
            }
        }
        return 0;
    }
    int numRows() const { return rowCount; }
    int numCols() const { return colCount; }
    vector<Element> getElements() const { return elements; }
};
class ConwayGameOfLife {
private:
    SparseMatrixArray board;
    int rows, cols;
    int countLiveNeighbors(int r, int c) const {
        int directions[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        int liveCount = 0;
        for (auto &dir : directions) {
            int newRow = r + dir[0];
            int newCol = c + dir[1];
            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                liveCount += board.get(newRow, newCol);
            }
        }
        return liveCount;
    }
public:
    ConwayGameOfLife(int r, int c) : rows(r), cols(c), board(SparseMatrixArray(r, c)) {}
    void setInitialState(const vector<vector<int>> &initialState) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                board.insert(i, j, initialState[i][j]);
            }
        }
    }
    void updateBoard() {
        SparseMatrixArray newBoard(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int liveNeighbors = countLiveNeighbors(i, j);
                int currentState = board.get(i, j);
                if (currentState == 1 && (liveNeighbors == 2 || liveNeighbors == 3)) {
                    newBoard.insert(i, j, 1); 
                } else if (currentState == 0 && liveNeighbors == 3) {
                    newBoard.insert(i, j, 1); 
                } else {
                    newBoard.insert(i, j, 0);  
                }
            }
        }
        board = newBoard; 
    }
    void displayBoard() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << board.get(i, j) << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    vector<vector<int>> initialState = {
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    ConwayGameOfLife game(5, 5);
    game.setInitialState(initialState);
    cout << "Initial Board:\n";
    game.displayBoard();
    game.updateBoard();
    cout << "\nNext Generation:\n";
    game.displayBoard();
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

#define ROWS 9
#define COLS 9

int main() {
    vector<vector<int>> array(ROWS, vector<int>(COLS));

    // Initialize the array with some values for demonstration
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            array[i][j] = i * COLS + j + 1;
        }
    }

    cout << "Original Array:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
     
     
    // Search for an element
    cout<<endl;
    int element_to_search = 45;
    int row, col;
    bool found = false;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (array[i][j] == element_to_search) {
                row = i;
                col = j;
                found = true;
                break;
            }
        }
    }
    if (found) {
        cout << "Element " << element_to_search <<" found at:(" << row << "," << col << ")" << endl;
    } else {
        cout << "Element " << element_to_search << " not found." << endl;
    }
     
    
    // Sum of all elements
     cout<<endl;
    int total_sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total_sum += array[i][j];
        }
    }
    cout << "Sum of all elements: " << total_sum << endl;
     
     
    // Insert an element
     cout<<endl;
    int insert_row = 3, insert_col = 3, value = 100;
    if (insert_row >= 0 && insert_row < ROWS && insert_col >= 0 && insert_col < COLS) {
        array[insert_row][insert_col] = value;
    } else {
        cout << "Invalid position!" << endl;
    }
    cout << "Array after insertion:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Delete an element
    cout<<endl;
    int delete_row = 3, delete_col = 3;
    if (delete_row >= 0 && delete_row < ROWS && delete_col >= 0 && delete_col < COLS) {
        array[delete_row][delete_col] = 0;
    } else {
        cout << "Invalid position!" << endl;
    }
    cout << "Array after deletion:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
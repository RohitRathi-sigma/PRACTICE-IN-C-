//Filter the negative and non negative number in 2D array.
#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the array:" <<endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    int negative[rows * cols];   // Maximum possible size
    int non_negative[rows * cols]; // Maximum possible size
    int neg_count = 0, non_neg_count = 0;

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            if(arr[i][j] < 0) {
                negative[neg_count++] = arr[i][j];
            } else {
                non_negative[non_neg_count++] = arr[i][j];
            }
        }
    }

    cout << "Negative numbers: ";
    for(int i = 0; i < neg_count; ++i) {
        cout << negative[i] << " ";
    }
   cout << endl;

   cout << "Non-negative numbers: ";
    for(int i = 0; i < non_neg_count; ++i) {
        cout << non_negative[i] << " ";
    }
    cout << endl;

    return 0;
}

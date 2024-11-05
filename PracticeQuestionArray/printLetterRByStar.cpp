//WAP to print the letter 'R' using star.

#include <iostream>
using namespace std;
void printR(int height) {
    int width = height / 2 + 2;  
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || 
                (i == 0 && j < width - 1) || 
                (i == height / 2 && j < width - 1) || 
                (j == width - 1 && i > 0 && i < height / 2) ||
                (i - j == height / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main() {
    int height;
    cout << "Enter the height of the letter R: ";
    cin >> height;
    printR(height);
    return 0;
}
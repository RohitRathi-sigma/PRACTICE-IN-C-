//Tower of Hanoi – The Tower of Hanoi is a mathematical problem which consists of three rods and multiple disks. Initially, all the disks are placed on one rod, one over the other in ascending order of size similar to a cone-shaped tower.

#include <iostream>
using namespace std;
void towerOfHanoiRecursive(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoiRecursive(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoiRecursive(n - 1, auxiliary, destination, source);
}
int main() {
    int n = 3;  
    cout << "Recursive Solution for Tower of Hanoi:\n";
    towerOfHanoiRecursive(n, 'A', 'C', 'B');  
    return 0;
}

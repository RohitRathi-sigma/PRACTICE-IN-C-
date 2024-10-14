//Tower of Hanoi – The Tower of Hanoi is a mathematical problem which consists of three rods and multiple disks. Initially, all the disks are placed on one rod, one over the other in ascending order of size similar to a cone-shaped tower.

#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;
class Stack {
private:
    vector<int> stackArray;  
    int maxSize;         
public:
    Stack(int size) : maxSize(size) {}
    void push(int value) {
        if (stackArray.size() < maxSize) {
            stackArray.push_back(value);
        } else {
            cout << "Stack Overflow!" << endl;
        }
    }
    int pop() {
        if (stackArray.empty()) {
            return -1;  
        } else {
            int topValue = stackArray.back();
            stackArray.pop_back();
            return topValue;
        }
    }
    bool isEmpty() {
        return stackArray.empty();
    }
    int peek() {
        if (stackArray.empty()) {
            return -1;  
        } else {
            return stackArray.back();
        }
    }
};
void moveDisks(Stack &src, Stack &dest, char s, char d) {
    int srcTop = src.isEmpty() ? -1 : src.pop();
    int destTop = dest.isEmpty() ? -1 : dest.pop();
    if (srcTop == -1) {
        src.push(destTop);
        cout << "Move disk " << destTop << " from " << d << " to " << s << endl;
    }
    else if (destTop == -1) {
        dest.push(srcTop);
        cout << "Move disk " << srcTop << " from " << s << " to " << d << endl;
    }
    else if (srcTop > destTop) {
        src.push(srcTop);
        src.push(destTop);
        cout << "Move disk " << destTop << " from " << d << " to " << s << endl;
    }
    else {
        dest.push(destTop);
        dest.push(srcTop);
        cout << "Move disk " << srcTop << " from " << s << " to " << d << endl;
    }
}
void towerOfHanoiNonRecursive(int numOfDisks, Stack &src, Stack &aux, Stack &dest) {
    char s = 'A', d = 'C', a = 'B';  // Names of rods
    int totalMoves = pow(2, numOfDisks) - 1;
    if (numOfDisks % 2 == 0) {
        swap(d, a);
    }
    for (int i = numOfDisks; i >= 1; i--) {
        src.push(i);
    }
    for (int i = 1; i <= totalMoves; i++) {
        if (i % 3 == 1) {
            moveDisks(src, dest, s, d); 
        } else if (i % 3 == 2) {
            moveDisks(src, aux, s, a);
        } else if (i % 3 == 3) {
            moveDisks(aux, dest, a, d); 
        }
    }
}
int main() {
    int numOfDisks = 3;
    Stack src(numOfDisks), aux(numOfDisks), dest(numOfDisks);
    cout << "Non-Recursive Solution for Tower of Hanoi:\n";
    towerOfHanoiNonRecursive(numOfDisks, src, aux, dest);
    return 0;
}

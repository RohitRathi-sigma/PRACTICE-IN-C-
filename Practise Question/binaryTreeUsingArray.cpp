//Implement memory representation of binary tree using array .
#include <iostream>
#include <vector>
using namespace std;
class BinaryTreeArray {
private:
    vector<int> tree;  
public:
    BinaryTreeArray(int size) {
        tree.resize(size, -1);  
    }
    void insert(int index, int value) {
        if (index >= tree.size()) {
            cout << "Index out of bounds." << endl;
            return;
        }
        tree[index] = value;
    }
    int getLeftChild(int index) {
        int leftChildIdx = 2 * index + 1;
        if (leftChildIdx < tree.size())
            return tree[leftChildIdx];
        return -1;
    }
    int getRightChild(int index) {
        int rightChildIdx = 2 * index + 2;
        if (rightChildIdx < tree.size())
            return tree[rightChildIdx];
        return -1;  
    }
    int getParent(int index) {
        if (index == 0) return -1; 
        return tree[(index - 1) / 2];
    }
    void display() {
        for (int i = 0; i < tree.size(); ++i) {
            if (tree[i] != -1)
                cout << tree[i] << " ";
            else
                cout << "- ";
        }
        cout << endl;
    }
};
int main() {
    BinaryTreeArray tree(7); 
    tree.insert(0, 1);
    tree.insert(1, 2);
    tree.insert(2, 3);  
    tree.insert(3, 4);  
    tree.insert(4, 5); 
    tree.insert(5, 6);
    tree.insert(6, 7);
    cout << "Binary Tree (Array Representation): ";
    tree.display();
    cout << "Left child of root: " << tree.getLeftChild(0) << endl;
    cout << "Right child of root: " << tree.getRightChild(0) <<endl;
    cout << "Parent of node 3: " << tree.getParent(3) << endl;
    return 0;
}

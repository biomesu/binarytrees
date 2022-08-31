#include <iostream>
#include "tree.h"
#include "tree.cpp"

using namespace std;

int main(){
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    cout << "Preorder traversal: ";
    traversePreOrder(root);
    cout << "\nInOrder traversal: ";
    traverseInOrder(root);
    cout << "\nPostOrder traversal: ";
    traversePostOrder(root);




    return 0;
}
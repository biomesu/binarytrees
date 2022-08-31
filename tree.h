#include <iostream>
using namespace std;
#ifndef TREE_H
#define TREE_H

struct node {
    public:
    int data;
    node *left;
    node *right;

    node *newNode(int data);
    void traversePreOrder(struct node *temp);
    void traverseInOrder(struct node *temp);
    void traversePostOrder(struct node *temp);


  
};

#endif
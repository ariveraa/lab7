//
// Created by Adrian Rivera on 11/15/18.
//

#include "Node.h"

Node:: Node(int newValue){
    value = newValue;
    rightChild = NULL;
    leftChild = NULL;
}

int Node :: getData() const  {
    return value;
}

Node* Node ::getLeftChild() const {
    return leftChild;
}

Node* Node ::getRightChild() const  {
    return rightChild;
}
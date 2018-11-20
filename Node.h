//
// Created by Adrian Rivera on 11/15/18.
//

#ifndef LAB7_NODE_H
#define LAB7_NODE_H

#include <iostream>
#include "NodeInterface.h"
#include "BSTInterface.h"

class Node : public NodeInterface{

public:
    int value;
    Node* rightChild;
    Node* leftChild;

    Node(int newValue);
    ~Node(){}
    int getData() const;
    Node* getLeftChild() const;
    Node* getRightChild() const;


};

#endif //LAB7_NODE_H

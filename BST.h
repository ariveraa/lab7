//
// Created by Adrian Rivera on 11/15/18.
//

#ifndef LAB7_BST_H
#define LAB7_BST_H

#include "Node.h"
#include "BSTInterface.h"

class BST : public BSTInterface {

protected:
    Node* rootNode;
    bool duplicateCheck;


public:
    BST();
    ~BST(){}
    NodeInterface * getRootNode() const;
    bool add(int data);
    bool remove(int data);
    void clear();
    Node* insert(Node*& T, int val);
    bool rem(Node*& T, int val);
    void repalceParent(Node*& oldParent, Node*& localParent);
    void clearTree(Node*& T);

};

#endif //LAB7_BST_H

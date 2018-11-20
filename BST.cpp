//
// Created by Adrian Rivera on 11/15/18.
//
#include "BST.h"

BST :: BST() {
    rootNode = NULL ;
}

NodeInterface* BST ::getRootNode() const {
    if(rootNode == NULL){
        cout << "root empty" << endl;
    }

    return rootNode;
}

bool BST :: add(int data) {
    return insert(rootNode, data);
}

Node* BST :: insert(Node*& T, int val){
    if(T == NULL){
        T = new Node(val);
        return T;
    }
    else if(T -> value == val){
        return T;
    }
    if(val < T -> value){
        return insert(T->leftChild, val );
    }
    else
        return insert(T -> rightChild, val);
}

bool BST :: remove(int data){
    return rem(rootNode, data);
}

bool BST ::rem(Node *&T, int val) {
    if(T == NULL){
        return false;
    }
    else if(T -> value == val){
        if(T -> rightChild == NULL && T -> leftChild == NULL){
            delete T;
            T = NULL;
        }
        else if(T-> rightChild == NULL){
            Node* replacement = T -> leftChild;
            delete T;
            T = replacement;
        }
        else if(T -> leftChild == NULL){
            Node* replacement = T -> rightChild;
            delete T;
            T = replacement;
        }
        else {
            Node* oldNode = T;
            if(T -> leftChild == NULL) {
                T = T -> rightChild;
            }
            else if(T-> rightChild == NULL){
                T = T -> leftChild;
            }
            else{
                repalceParent(oldNode,T);
            }
            delete oldNode;


        }
        return true;
    }
    if( val < T -> value){
        return rem(T -> leftChild, val);
    }
    else
        return rem(T-> rightChild, val);
}

void BST :: repalceParent(Node*& oldParent, Node* localParent) {
    if(localParent -> rightChild != NULL){
        repalceParent(oldParent, localParent -> rightChild);
    }
    else{
        oldParent -> value = localParent -> value;
        oldParent = localParent;
        localParent = localParent -> leftChild;
    }
}



void BST :: clear(){
clearTree(rootNode);
rootNode = NULL;

}

void BST ::  clearTree(Node*& T ){
    if(T == NULL){
        return;
    }
    if(T -> leftChild != NULL){
        clearTree(T->leftChild);
    }
    if(T-> rightChild != NULL){
        clearTree(T-> rightChild);
    }
    delete T;
}
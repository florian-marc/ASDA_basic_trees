//
// Created by flori on 31/10/2018.
//

#ifndef CHAPTER_4_CPP_BINARYTREE_H
#define CHAPTER_4_CPP_BINARYTREE_H

#include "NAryTree.h"

template<typename T>
class BinaryTree : public NAryTree<T>
{
public:
    BinaryTree<T>();

    ~BinaryTree();

    void insert(T data);

    Node<T>* search(T data);

};


#endif //CHAPTER_4_CPP_BINARYTREE_H

//
// Created by flori on 18/10/2018.
//

#ifndef CHAPTER_4_CPP_NARYTREE_H
#define CHAPTER_4_CPP_NARYTREE_H

#include <vector>
#include "Node.h"

using std::vector;

template<typename T>
class NAryTree
{
    //attributes
private:
    Node<T>* root;
    int max_children;
public:
    //Constructor
    NAryTree();
    NAryTree(int max_children);

    //Methods
    void Print();

    void Add(T data, std::vector<unsigned int> path);

private:
    void _Add(T data, vector<unsigned int> path, unsigned int index);

    bool IsPathCorrect(std::vector<unsigned int> path);
};


#endif //CHAPTER_4_CPP_NARYTREE_H

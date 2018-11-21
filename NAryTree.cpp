//
// Created by flori on 18/10/2018.
//

#include <cstdlib>
#include <algorithm>
#include "NAryTree.h"

using namespace std;

template<typename T>
NAryTree<T>::NAryTree()
{
    this->root = NULL;
}

template<typename T>
NAryTree<T>::NAryTree(int max_children):NAryTree()
{
    this->max_children = max_children;
}

template<typename T>
void NAryTree<T>::Add(T data, vector<unsigned int> path)
{
    _Add(data, path, 0);
}

/*template<typename T>
void NAryTree<T>::_Add(T data, vector<unsigned int> path, unsigned int index)
{
    if (IsPathCorrect(path))
    {

    }
}*/

template<typename T>
bool NAryTree<T>::IsPathCorrect(vector<unsigned int> path)
{
    for_each(path.begin(), path.end(), [&](unsigned int i) {
        if (this->max_children >= 0)
        {
            return i < this->max_children;
        }
        else return true;
    });
}

template<typename T>
void NAryTree<T>::Print()
{
    this->root->Print();
}
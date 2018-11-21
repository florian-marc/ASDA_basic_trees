//
// Created by flof on 20/11/18.
//

#include "NaryTreeNode.h"
#include <iostream>

using namespace std;

template<typename T>
NaryTreeNode<T>::NaryTreeNode(T data, int n)
{
    this->N = n;
    this->mParent = NULL;
    this->mChildrenList = &new list<NaryTreeNode<T>*>(this->N);
    this->mData = data;
}

template<typename T>
NaryTreeNode<T>* NaryTreeNode<T>::getChild(int index)
{
    NaryTreeNode<T>* out = NULL;
    if (index < this->N)
    {
        out = this->mChildrenList[index];
    }
    return out;
}

template<typename T>
list<NaryTreeNode<T>*>* NaryTreeNode<T>::getChildren()
{
    return &new list<NaryTreeNode<T>*>(mChildrenList);
}

template<typename T>
void NaryTreeNode<T>::addChild(T data)
{
    _addChild(new NaryTreeNode(data, this->N));
}

template<typename T>
void NaryTreeNode<T>::_addChild(NaryTreeNode<T>* node)
{
    if (this->mChildrenList->size() < this->N)
    {
        mChildrenList->push_back(node);
    }
}

template<typename T>
void NaryTreeNode<T>::print(unsigned int depth)
{
    for (int i = 0; i < depth; i++)
    {
        cout << "   ";
    }
    cout << mData << endl;

    for (typename list<NaryTreeNode*>::iterator it = mChildrenList->begin(); it != mChildrenList->end(); it++)
    {
        *it->print(depth + 1);
    }
}

template<typename T>
void NaryTreeNode<T>::print()
{
    this->print(0);
}

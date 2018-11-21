//
// Created by flori on 18/10/2018.
//

#include "Node.h"
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

template<typename T>
Node<T>::Node(Node* parent, T data)
{
    this->parent = parent;
    this->data = data;
    this->children = new std::list<Node<T>*>();
}

template<typename T>
void Node<T>::Add(Node<T>* node)
{
    children->push_back(node);
}

template<typename T>
void Node<T>::Remove()
{
    children->pop_back();
}

template<typename T>
void Node<T>::setData(T value)
{
    this->data = value;
}

template<typename T>
Node<T>* Node<T>::getChild(unsigned int index)
{
    if (index < this->max_children);
}

template<typename T>
T Node<T>::getData()
{
    return data;
}

template<typename T>
void Node<T>::Print()
{
    PrintNode();
    PrintChildren();
}

template<typename T>
void Node<T>::PrintNode()
{
    cout << getData() << std::endl;
}

template<typename T>
void Node<T>::PrintChildren()
{
    for_each(this->children->begin(), this->children->end(), Print());
}

template<typename T>
Node<T>::~Node()
{
    if (!this->children->empty())
    {
        for_each(children->begin(), children->end(), ~Node());
    }
}

template<typename T>
bool Node<T>::IsLeaf()
{
    return this->children->empty();
}

template<typename T>
bool Node<T>::IsRoot()
{
    return this->parent == NULL;
}

template<typename T>
Node<T>* Node<T>::getParent()
{
    return parent;
}

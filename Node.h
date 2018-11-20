//
// Created by flori on 18/10/2018.
//

#ifndef CHAPTER_4_CPP_NODE_H
#define CHAPTER_4_CPP_NODE_H


#include <list>

template<typename T>
class Node
{
    //attributes
private:
    T data;
    Node* parent;
    std::list<Node*>* children;

public:

    Node(Node* parent, T data);

    ~Node();

    T getData();

    void setData(T value);

    //Methods
    void Add(Node<T>* node);

    void Remove();

    bool IsLeaf();

    bool IsRoot();

    Node<T>* getParent();

    //Print
public:
    void Print();

private:
    void PrintNode();

    void PrintChildren();
};


#endif //CHAPTER_4_CPP_NODE_H

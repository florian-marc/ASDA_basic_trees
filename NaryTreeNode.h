//
// Created by flof on 20/11/18.
//

#ifndef ASDA_BASIC_TREES_NARYTREENODE_H
#define ASDA_BASIC_TREES_NARYTREENODE_H

#include <list>

template<typename T>
class NaryTreeNode
{
private:
    NaryTreeNode* mParent;
    T mData;
    std::list<NaryTreeNode*>* mChildrenList;
    int N;

public:
    NaryTreeNode(T data, int n);

    ~NaryTreeNode();

    void addChild(T data);

    NaryTreeNode* getChild(int index);

    std::list<NaryTreeNode<T>*>* getChildren();

    void print();

private:
    void _addChild(NaryTreeNode<T>* node);

    void print(unsigned int depth);

};


#endif //ASDA_BASIC_TREES_NARYTREENODE_H

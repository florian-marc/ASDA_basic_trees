#include <iostream>
#include "NaryTreeNode.h"
#include <cstring>

void testNaryTree()
{
    int n = 3;
    NaryTreeNode<int>* root = new NaryTreeNode<int>(0, n);
    root->addChild(1);
    root->getChild(0)->addChild(3);
    root->getChild(0)->getChild(0)->addChild(8);
    root->getChild(0)->getChild(0)->addChild(9);
    root->getChild(0)->addChild(4);
    root->getChild(0)->getChild(1)->addChild(10);
    root->addChild(2);
    root->getChild(1)->addChild(5);

    root->getChild(1)->addChild(6);

    root->getChild(1)->addChild(7);

    root->print();
}

int main()
{
    testNaryTree();
    std::cin.get();
    return 0;
}
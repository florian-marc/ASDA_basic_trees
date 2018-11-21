cmake_minimum_required(VERSION 3.12)
project(ASDA_basic_trees)

set(CMAKE_CXX_STANDARD 14)

add_executable(ASDA_basic_trees main.cpp BinaryTree.cpp BinaryTree.h NAryTree.cpp NAryTree.h Node.cpp Node.h NaryTreeNode.cpp NaryTreeNode.h)
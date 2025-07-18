#include "BST.h"
#include <iostream>
using namespace std;
int main()
{
    BinarySearchTree BST;
    BST.insert(20);
    BST.insert(50);
    BST.insert(54);
    BST.insert(65);
    BST.insert(3);
    BST.inorder();
}

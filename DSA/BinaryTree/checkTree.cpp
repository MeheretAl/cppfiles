#include <iostream>
#include "implementation.h"

using namespace std;

bool checkTree(Node *root, int target)
{
    if (root->left->data + root->right->data == target)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#include "implementation.h"

using namespace std;

Node *searchBinaryTree(Node *root, int value)
{
    // base case
    if (root->data == value || root == nullptr)
    {
        return root;
    }

    if (root->data < value)
    {
        return searchBinaryTree(root->right, value);
    }
    else
    {
        return searchBinaryTree(root->left, value);
    }
}
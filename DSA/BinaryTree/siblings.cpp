#include "implementation.h"
#include <iostream>

using namespace std;

int sumOfSiblings(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    if (root->left != nullptr && root->right != nullptr)
    {
        return root->left->data + root->right->data;
    }

    int left = sumOfSiblings(root->left);
    int right = sumOfSiblings(root->right);
    return left + right;
}

int main()
{
    Node *root = createNewNode(1);
    root->left = createNewNode(5);                // node siblings with 10
    root->right = createNewNode(10);              // node
    root->left->left = createNewNode(8);          // node
    root->right->right = createNewNode(9);        // node
    root->right->right->left = createNewNode(14); // leaf
    root->left->left->right = createNewNode(17);  // leaf
    root->right->left = createNewNode(78);        // leaf

    // siblings | 10 and 5 && 9 and 78 are siblings

    int answer = sumOfSiblings(root);
    cout << answer;

    return 0;
}

//this gives incorrect answers
//dont know why
//will figure out
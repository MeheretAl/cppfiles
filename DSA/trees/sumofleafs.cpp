#include "implementation.h"
#include <iostream>

using namespace std;

int sumOfLeaf(Node* root){
    if (root == nullptr)
    {
        return 0;
    }
    
    if (root != nullptr)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            return root->data;
        }
        
    }
    int left = sumOfLeaf(root->left);
    int right = sumOfLeaf(root->right);
    
    return left+right;
}

int main(int argc, char const *argv[])
{
    Node* root = createNewNode(1);
    root->left = createNewNode(5);
    root->right = createNewNode(10);
    root->left->left = createNewNode(8);//node
    root->right->right = createNewNode(9);//node
    root->right->right->left = createNewNode(14); //leaf
    root->left->left->right = createNewNode(17); //leaf
    root->right->left = createNewNode(78);//leaf
    /* 
                            1
                        
                    5               10

            8                78leaf           9
                17leaf              14leaf     
    */
    //sum of leaf should be 14+17+78 -> 109


    int answer = sumOfLeaf(root);
    cout << answer;
    return 0;
}

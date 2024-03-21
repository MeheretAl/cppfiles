#include "implementation.h"
#include <iostream>
#include <climits>

using namespace std;

int findMax(Node* root){
    if (root == nullptr)
    {
        return;
    }

    int leftmax = findMax(root->left);
    int rightmax =findMax(root->right); 

    return max(leftmax,rightmax);

}

int main(){
    Node* root = createNewNode(1);
    root->left = createNewNode(87);
    root->right = createNewNode(76);
    root->left->left = createNewNode(21);
    root->left->right = createNewNode(32);
    root->right->left = createNewNode(0);
    root->right->right = createNewNode(72);

    int answer = findMax(root);
    cout << answer;

    return 0;
}
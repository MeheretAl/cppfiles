#include "implementation.h"
#include <vector>

using namespace std;

int main()
{
}

int rangeSumBST(Node *root, int minValue, int highValue)
{
    int sum = 0;
    // inorder traversal
    if (root == nullptr)
    {
        return 0;
    }
    else
    {
        if (root->data <= highValue && root->data >= minValue)
        {
            sum += root->data;
        }
    }

    sum += rangeSumBST(root->left, minValue, highValue);
    sum += rangeSumBST(root->right, minValue, highValue);

    return sum;
}

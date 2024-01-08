//implementation of binary tree

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void deleteTree(Node* root){
    //this breadth-first-search recursive function is needed to free up memory allocated to the
    //trees using the "new" keyword

    if (root == nullptr)
    {   //to check if we've reached a leaf
        //true then there is nothing to delete so just return back
        return;
    }

    //recursive calls
    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}


int main() {
    Node* root = createNewNode(1);
    //this is the root of the binary tree
    root->left = createNewNode(2);
    root->right = createNewNode(3);
    
    root->left->left = createNewNode(4);
    root->left->right = createNewNode(5);

    root->right->left = createNewNode(6);
    root->right->right = createNewNode(7);

    //and so on and so forth
    /*  This is what th three looks like
                    1
            2               3
        4       5       6       7
    
    */
    // freeing up memory allocated to the tree
    delete root;
    return 0;
}

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool search(Node* root, int key) {

    bool value;

    if(root == NULL)
        return false;

    if(root->data == key)
        return true;

    if(key < root->data)
        value = search(root->left, key);
    else
        value = search(root->right, key);

    return value;    
}


Node* insert(Node* root, int key) {

    if(root == NULL) {
        Node* newNode = new Node(key);
        return newNode;
    }

    if(key < root->data) {
        root->left = insert(root->left, key);
    }
    else {
        root->right = insert(root->right, key);
    }

    return root;
}


Node* minNode(Node* root) {

    Node* temp = root;

    while(temp->left != NULL) {
        temp = temp->left;
    }

    return temp;
}


Node* maxNode(Node* root) {

    Node* temp = root;

    while(temp->right != NULL) {
        temp = temp->right;
    }

    return temp;
}


Node* delNode(Node* root, int x) {

    // Base case
    if(root == NULL)
        return NULL;

    if(x == root->data) {

        // Case 1: 0 children (Leaf node)
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // Case 2: Only left child
        if(root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Only right child
        if(root->left == NULL && root->right != NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // Case 3: 2 children
        if(root->left != NULL && root->right != NULL) {

            Node* node = maxNode(root->left);
            root->data = node->data;
            root->left = delNode(root->left, node->data);
            return root;
        }
    }

    // Recursive case
    if(x < root->data)
        root->left = delNode(root->left, x);
    else
        root->right = delNode(root->right, x);

    return root;
}


void inorder(Node* root) {

    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main() {

    Node* root = NULL;

    // Insertion
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);



    // Searching
    int key = 40;

    if(search(root, key))
        cout << "\n" << key << " found in BST";
    else
        cout << "\n" << key << " not found in BST";



    // Minimum node
    cout << "\nMinimum Node: " << minNode(root)->data;



    // Maximum node
    cout << "\nMaximum Node: " << maxNode(root)->data;



    // Deletion
    root = delNode(root, 50);

    cout << "\nInorder after deletion: ";
    inorder(root);

    return 0;
}

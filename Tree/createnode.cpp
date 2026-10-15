#include <iostream>
#include <climits>
using namespace std;

// a binary tree is not built in type in c++, we must design our own custom box
// that hold data, left pointer and right pointer
struct node {
    int data;              // store the actual numbers
    node* left;            // pointer to left child
    node* right;           // pointer to right node

    node(int val) {
        data = val;
        left = NULL;           // starts empty
        right = NULL;          // starts emmpty
    }
};

void printinorder(node* root){
    if(root ==  NULL){
        return;
    }
    printinorder(root->left);
    cout<< root->data <<" ";
    printinorder(root->right);
}

void printpreorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

void printpostorder(node* root){
    if(root == NULL)
    return;
    printpostorder(root->left);
    printpostorder(root->right);
    cout<< root->data<<" ";
}

//Count Total Nodes
int countNodes(node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

//Count Leaf Nodes
int countLeafNodes(node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

//Find Sum of All Nodes
int sumOfNodes(node* root) {
    if (root == NULL) return 0;
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

//Find Maximum Element
int findMax(node* root) {
    if (root == NULL) return INT_MIN;
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);
    return max(root->data, max(leftMax, rightMax));
}

//Find Minimum Element
int findMin(node* root) {
    if (root == NULL) return INT_MAX;
    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);
    return min(root->data, min(leftMin, rightMin));
}

//Find Height of Tree
int findHeight(node* root) {
    if (root == NULL) return 0;
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

//Count Nodes Having Only One Child
int countSingleChildNodes(node* root) {
    if (root == NULL) return 0;
    int count = 0;
    if ((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL)) {
        count = 1;
    }
    return count + countSingleChildNodes(root->left) + countSingleChildNodes(root->right);
}

//Count Nodes Having Two Children
int countTwoChildNodes(node* root) {
    if (root == NULL) return 0;
    int count = 0;
    if (root->left != NULL && root->right != NULL) {
        count = 1;
    }
    return count + countTwoChildNodes(root->left) + countTwoChildNodes(root->right);
}

//Find Sum of Leaf Nodes
int sumOfLeafNodes(node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) {
        return root->data;
    }
    return sumOfLeafNodes(root->left) + sumOfLeafNodes(root->right);
}

//Search for an Element
bool searchElement(node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;
    return searchElement(root->left, key) || searchElement(root->right, key);
}

//Find Number of Nodes at a Given Level
int countNodesAtLevel(node* root, int level) {
    if (root == NULL) return 0;
    if (level == 1) return 1;
    return countNodesAtLevel(root->left, level - 1) + countNodesAtLevel(root->right, level - 1);
}
int main() {
    // level 1
    node* root = new node(10);
    // level 2
    root->left = new node(20);
    root->right = new node(30);
    // level 3
    // children of node 2
    root->left->left = new node(40);
    root->left->right = new node(50);
    // children of node 3
    root->right->left = new node(60);
    root->right->right = new node(70);

    cout<<"inorder traversal: ";
    printinorder(root);
    cout<<endl;

    cout<<"preorder traversal: ";
    printpreorder(root);
    cout<<endl;

    cout<<"postorder traversal: ";
    printpostorder(root);
    cout<<endl;

    cout << "Total nodes: " << countNodes(root) << endl;
    cout << "Leaf nodes: " << countLeafNodes(root) << endl;
    cout << "Sum of all nodes: " << sumOfNodes(root) << endl;
    cout << "Maximum element: " << findMax(root) << endl;
    cout << "Minimum element: " << findMin(root) << endl;
    cout << "Height of tree: " << findHeight(root) << endl;
    cout << "Nodes with one child: " << countSingleChildNodes(root) << endl;
    cout << "Nodes with two children: " << countTwoChildNodes(root) << endl;
    cout << "Sum of leaf nodes: " << sumOfLeafNodes(root) << endl;

    int searchKey = 50;
    cout << "Search for " << searchKey << ": " << (searchElement(root, searchKey) ? "Found" : "Not Found") << endl;

    int level = 3;
    cout << "Nodes at level " << level << ": " << countNodesAtLevel(root, level) << endl;

    return 0;
}
#include <iostream>
using namespace std;

//validate BST problem 
/*
//best approach 
bool isBST(BinaryTreeNode<int> *root, int min, int max){
    //base case
    if(root==NULL){
        return true;
    }
    
    if(root->data >=min && root->data <=max){
        bool L=isBST(root->left, min, root->data);
        bool R=isBST(root->right, root->data, max);

        return L&&R;
    }
    else{
        return false;
    }
}
bool validateBST(BinaryTreeNode<int> *root) {
        return isBST(root , INT_MIN , INT_MAX);   
}

*/

// approach-2 : inorder nikl lo or check kar lo sorted h ki nhi 
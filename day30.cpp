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



//find K-th smallest element in BST 
// approach :inorder niklte gye jise hi k smallest mila wahi print kara diye 
/*
int solve(BinaryTreeNode<int>*root, int k, int& i){
    if(root==NULL){
        return -1;

    }

    //Left 
    int left =solve(root->left, k, i);

    // agar -1 nhi h to wahi answer h 
    if(left!=-1){
        return left;
    }
    

    //N
    i++;
    if(i==k){
        return root->data;
    }

    //right
    return solve(root->right, k, i);
   
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i=0;
    int ans=solve(root,k,i);
    return ans;
}*/

//t.c. O(n)  && s.c O(n)



// h.w. Morris traversal ka use karke es code ko optimise karna h taki space o(1) ho jaye



//find K-th biggest element in BST
// kth lasrgest ko mai n-k+1 smallest bol sakta hu 




// inorder predessor and successor in BST 
// pahle maine BST ka inorder ko ek vector mai save kara li ,fir us "key "par jake , binary search ki help se , key ke pahle wla element uska predeccor and bad ka element successor

/*void Inorder(TreeNode *root , vector<int> &ans ){
    if(root==NULL){
        return ;
    }
    Inorder(root->left,ans);
    ans.push_back(root->data);
    Inorder(root->right,ans);
}

int search (const vector<int> &ans , int key ){
    int start=0;
    int end=ans.size()-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(ans[mid]==key){
            return mid;
            }
        else if(ans[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return start;

}
pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    vector<int>ans;
    Inorder(root, ans);

    int index=search(ans, key);

    pair<int,int>p=make_pair(-1,-1);
    if(index !=-1){
        if(index>0){
            p.first=ans[index-1];
        }
        if(index< ans.size()){
        if(index < ans.size() && ans[index] == key && index + 1 < ans.size()) {
            p.second = ans[index + 1];
        }
        else if(index < ans.size()) {
            p.second = ans[index];
        }
        }
        
    }
    

    return p;

}*/





//algo 2: node(key )ko find kiya , max and min wale logic se predessor and successor nikl liye 
// fir answer return kar diya  
/*pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.

    //find the Node
    TreeNode *temp=root;

    int pred=-1;
    int succ=-1;

    while(temp !=NULL && temp->data !=key){
        if(temp->data >key){
            succ=temp->data;
            temp=temp->left;
        }
        else{
            pred=temp->data;
            temp=temp->right;
        }
    }

    // If key is not found
    if (temp == NULL)
        return {pred, succ};

    //pred and succ

    //pred
    TreeNode *le=temp->left;
    while(le !=NULL){
        pred=le->data;
        le=le->right;

    }


    //succ
    TreeNode *rig=temp->right;
    while(rig !=NULL){
        succ=rig->data;
        rig=rig->left;
    }

    pair<int,int> p={pred, succ};

    return p;



}*/ 






//LCA in BST

/*TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    if(root==NULL){
        return NULL;
    }

    if(root->data > P->data  && root->data > Q->data  ){
        return LCAinaBST(root->left, P,Q);
    }
    if(root->data < P->data && root->data <Q->data){
        return LCAinaBST(root->right ,P, Q);
    }

    return root;
}*/





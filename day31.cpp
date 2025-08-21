#include<iostream>
using namespace std;

//  Two Sum IV - Input is a BST
// approach 1:
// pahle elemet ko lenge mana 10 h fir target se minus karege jo bacha usko left ya right mai search karege if found then true return 
// But T.C. O(n2)


// Approach 2:
//Maine BST ka inorder nikl liya (kyuki wo sorted hota h) fir two pointer apporach lagane h 
//T.c. O(n)
/*
void inorder(BinaryTreeNode<int>* root,vector<int>&temp){
    if(root==NULL){
        return ;
    }
    inorder(root->left,temp);
    temp.push_back(root->data);
    inorder(root->right,temp);
    
    
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
    vector<int>temp;

    //stored inorder sorted values
	inorder(root,temp);


    //Use two pointer  apporach to find if pair exist
    int i=0;
    int j=temp.size()-1;

    while(i<j){
        int sum=0;
        sum=temp[i]+temp[j];
        if(sum==target){
            return true;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;


}*/





//  Flatten BST To A Sorted List(aap BST ko flat karke ek linklist bana do jo ki sorted honi chaye)

// Approach: Mujhe pata h inorder sorted hota h maine sare nodes ka data save kar liye ek vector mai , then nodes create karte gya or left mai null dala or right se dusri node create kiya or add karte gya 
//last mai left and right dono mai null daal diya 

/*
void inorder(TreeNode<int>* root , vector<int> &temp){
    if(root==NULL){
        return;
    }

    inorder(root->left, temp);
    temp.push_back(root->data);
    inorder(root->right,temp);

}
TreeNode<int>* flatten(TreeNode<int>* root)
{


    vector<int>inorder_val;
    //1st part
    inorder(root, inorder_val);



    TreeNode<int>* newRoot=new TreeNode<int>(inorder_val[0]);
    TreeNode<int>* curr=newRoot;


    //2nd Part
    for(int i=1;i<inorder_val.size();i++){

        TreeNode<int>*temp=new TreeNode<int>(inorder_val[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }

    //3rd part
    curr->left=NULL;
    curr->right==NULL;


    return newRoot;
    
}*/







//  Normal BST To Balanced BST
// pahle inorder niklo vector mai save kara lo , fir mid niklo , or fir tree bana lo recursion ki help se

/*
void inorder(TreeNode<int>*root,vector<int>&temp){
    if(root==NULL){
        return ;
    }
    inorder(root->left,temp);
    temp.push_back(root->data);
    inorder(root->right,temp);
}


TreeNode<int>* inordertoBST(int s,int e,vector<int>temp){

    //base case
    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;

    TreeNode<int>* root=new TreeNode<int>(temp[mid]);
    root->left=inordertoBST(s,mid-1,temp);
    root->right=inordertoBST(mid+1,e,temp);
    return root;

}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    
    //Step 1
    vector<int>temp;
    inorder(root,temp);

    //find mid of vector
    int start=0;
    int end=temp.size()-1;
    return inordertoBST(start, end, temp);
    

}
*/








//BST from preorder
//aproach 1
//pahle aap preoredr , se insert into BST wale function se BST bana di 
//T.C.=O(n2)



//approach 2
//preorder given h or hum sorted order se inorder bana lenge 
//fir preorder + inorder se BST Bana lenge
//T.C. O(nlogn)


//Approach 3
//T.C. O(n)
//same as near isBST(int max, int min wala approach)
/*
BinaryTreeNode<int>* solve(vector<int> &preorder,int min, int max, int&i){
    if(i>=preorder.size()){
        return NULL;
    }

    if(preorder[i]<min || preorder[i]>max){
        return NULL;
    }

    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(preorder[i++]);
    root->left=solve(preorder,min,root->data,i);
    root->right=solve(preorder,root->data,max,i);

    return root;

}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    int min=INT_MIN;
    int max=INT_MAX;
    int index=0;

    return solve(preorder,min,max,index);
}*/








//Merge two BST (most important question)
//Approach 1: 
//pahle dono BST ka inorder nikl liya 
//fir dono ko merge kar liya using merge to sorted array ki help se
//inorder to BST ka logic laga diya 

//T.C. O(n+m)
//S.C. O(n+m)

/*
void in_array(TreeNode *root, vector<int> &temp ){
    if(root==NULL){
        return;
    }
    in_array(root->left,temp);
    temp.push_back(root->data);
    in_array(root->right,temp);

    
}
vector<int>mergein(vector<int>a,vector<int>b){
    int i=0;
    int j=0;
    int k=0;

    vector<int>result(a.size()+b.size());


    if(a.size()==0){
        return b;
    }
    if(b.size()==0){
        return a;
    }
    while(i<a.size()  && j<b.size()){
        if(a[i]<=b[j]){
            result[k++]=a[i++];
        }
        else{
            result[k++]=b[j++];
        }
    }
    while(i<a.size()){
        result[k++]=a[i++];
    }
    while(j<b.size()){
        result[k++]=b[j++];
    }
    return result;
   

}
TreeNode* inordertoBST(int s,int e,vector<int>temp){

    //base case
    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;

    TreeNode* root=new TreeNode(temp[mid]);
    root->left=inordertoBST(s,mid-1,temp);
    root->right=inordertoBST(mid+1,e,temp);
    return root;

}
TreeNode* mergeBST(TreeNode *root1, TreeNode *root2)
{
    //store inorder
    vector<int>array1;
    vector<int>array2;
    in_array(root1,array1);
    in_array(root2,array2);

    //merge both soretd arrays
    vector<int>mergeArray=mergein(array1,array2);


    //used merged inorder array to BST

    int start=0;
    int end=mergeArray.size()-1;
    return inordertoBST(start,end, mergeArray);

}*/




//Approach 2. where space is O(height of BST1 +height of BST2)
//extra space use karne ki wajae mai pointers ko hi change kar du to space bach jayega 
//step 1 maine BST1 ko falltern kar diya into a sorted linklist similar maine dusre BST2 ke sath bhi kiya 
//step 2 maine sorted Linklist 1 and linklist 2 ko merge kar liya 
// BST bana liya sorted merged linklist se

/*

// convert BST to sorted Doubly linklist

void convert_BSTtoDLL(TreeNode *root, TreeNode *&head){
    if(root==NULL){
        return ;
    }

    //right wale subtree ko Linklist mai convert karke lao recursion
    convert_BSTtoDLL(root->right, head);

    root->right=head;

    if(head !=NULL)
    head->left=root;

    head=root;

    convert_BSTtoDLL(root->left,head);

    return head;


}

//Merge two soretd linklist into one linklist 
TreeNode* mergeLL(TreeNode *&head1,TreeNode *&head2){
    TreeNode *head=NULL;
    TreeNode *tail=NULL;

    while(head1 !=NULL && head2 !=NULL){
      if(head1->data < head2->data){
        if(head==NULL){
            head=head1;
            tail=head1;
            head1=head1->right;
        }
        else{
            tail->right=head1;
            head1->left=tail;
            tail=head1;
            head1=head1->right;
        }
      }
      else{
        if(head==NULL){
            head=head2;
            tail=head2;
            head2=head2->right;
        }
        else{
            tail->right=head2;
            head2->left=tail;
            tail=head2;
            head2=head2->right;
            
        }

      }
    }
    while(head1 !=NULL){
            tail->right=head1;
            head1->left=tail;
            tail=head1;
            head1=head1->right;

    }
    while(head2 !=NULL){
            tail->right=head2;
            head2->left=tail;
            tail=head2;
            head2=head2->right;

    }
    return head;
}


//sorted LL to BST
//starting ki n/2 node se left tree bana lo 
//create root
// root->left=left laga do , head=head->right ,
//create right sub tree

//count the total number node in LL
int countnode(TreeNode *root){
    int cnt=0;
    while(root!=NULL){
        cnt++;
        root=root->right;
    }
    return cnt;
}
TreeNode* sortedLLtoBST(TreeNode*head,  int n){
    if(n<=0  || head==NULL){
        return NULL;
    }

    TreeNode*Left=sortedLLtoBST(head,n/2)
    TreeNode*root=head;
    root->left=left;

    head=head->right;

    root->right=sortedLLtoBST(head,n-n/2-1);
    return root;
}


TreeNode* mergeBST(TreeNode *root1, TreeNode *root2)
{
    //step1: BST to LinkLists
    TreeNode*head1=NULL;
    convert_BSTtoDLL(root1,head1);
    head1->left=NULL;

    TreeNode*head2=NULL;
    convert_BSTtoDLL(root2,head2);
    head2->left=NULL;

    //merge both soretd LL
    TreeNode*MergedLL=mergeLL(head1,head2);
    
    //count no of ndes in LL
    int n=countnode(MergedLL);

    //convert LL to BST
    return sortedLLToBST(MergedLL,n);


}*/




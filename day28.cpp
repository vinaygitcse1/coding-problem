#include <iostream>
using namespace std;



// Sum of nodes on the longest path
//T.C. O(n)
/*
class Solution {
  public:
    void solve(Node* root , int sum, int& maxSum, int len, int& maxLen ){
        if(root==NULL){
            if(len>maxLen){
                maxLen=len;
                maxSum=sum;
            }
            else if(len==maxLen){
                maxSum= max(sum , maxSum);
            }
            return;
        }
        
        sum=sum+root->data;
        
        solve(root->left,sum, maxSum, len+1, maxLen);
        solve(root->right , sum , maxSum , len+1, maxLen);
        
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        int sum=0;
        int maxSum=0;
        
        int len=0;
        int maxLen=0;
        
        solve(root, sum ,maxSum , len , maxLen);
        
        return maxSum;
        
    }
};*/



// LCA in Binary Tree
/*
class Solution {
  public:
    // Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root, int n1, int n2) {
        // Your code here
        if(root==NULL){
            return NULL;
        }
        
        if(root->data==n1  || root->data ==n2){
            return root;
        }
        
        
        Node* LeftAns= lca(root->left, n1, n2);
        Node* RightAns=lca (root->right, n1, n2);
            
        if(LeftAns==NULL  && RightAns==NULL){
                return NULL;
            }
        
        if(LeftAns !=NULL  && RightAns==NULL){
            return LeftAns;
        }
        
         if(LeftAns ==NULL  && RightAns!=NULL){
            return RightAns;
        }
        if(LeftAns !=NULL  && RightAns!=NULL){
            return root;
        }
        
        
        
    }
};*/





//K Sum Path

// Note: Sir ne isse T.C =O(n2) mai kiya h mujhe o(n) mai karna h 
//map ka use karke;
/*
class Solution {
  public:
    void solve(Node*root, int k , vector<int>path , int& count){
        if(root==NULL){
            return;
            
        }
        
        //pahle data dala 
        path.push_back(root->data);
        
        //Left mai gya 
        solve(root->left , k, path, count);
        
        //right mai gya 
        solve(root->right , k, path, count);
        
        
        //aab k sum path h ki nhi dekh lo  or count ++ kar do agar path h to 
        int size=path.size();
        int sum=0;
        
        for(int i=size-1; i>=0;i--){
            sum=sum+path[i];
            
            if(sum==k){
                count++;
            }
            
        }
        path.pop_back();
        
    }
    int sumK(Node *root, int k) {
        // code here
        vector<int>path;
        int count=0;
        
        solve(root, k, path, count );
        
        return count;
    }
};*/




// Kth Ancestor in a Tree
/*
class Solution {
  public:
    Node* solve(Node*root , int &k, int node){
        if(root==NULL){
            return NULL;
        }
        
        if(root->data==node){
            return root;
        }
        
        Node*LeftAns = solve(root->left, k, node);
        Node*RightAns= solve(root->right, k,node);
        
        
        if(LeftAns !=NULL && RightAns ==NULL ){
            --k;
            if(k==0){
                k=INT_MAX;
              return root;  
            }
            return LeftAns;
            
        }
        if(LeftAns ==NULL && RightAns !=NULL ){
            --k;
            if(k==0){
                k=INT_MAX;
                return root;
            }
            return RightAns;
            
        }
        
        return NULL;
        
        
    }
    int kthAncestor(Node *root, int k, int node) {
        // Code here
        
        Node*ans = solve(root, k, node);
        if(ans==NULL || ans->data==node){
            return -1;
        }
        else{
            return ans->data;
        }
    }
};

*/






//Maximum sum of Non-adjacent nodes
/*class Solution {
  public:
  pair<int,int> solve(Node*root){
      if(root==NULL){
          pair<int,int>p;
          p=make_pair(0,0);
          return p;
      }
      
      pair<int,int>left= solve(root->left);
      pair<int, int>right=solve(root->right);
      
      
      pair<int,int>res;
      //for include current
      res.first=root->data+left.second+right.second;
      
      
      //for exciude current
      res.second=max(left.first,left.second )+max(right.first , right.second);
      
      return res;
  }
    // Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) {
        // code here
        pair<int,int>ans=solve(root);
        
        return max(ans.first , ans.second);
    }
};*/




//approach 

//take index at root element in preorder array 
//find root element ki positon in inorder array i,e, pos 
//call recursion for root ke left ke liye (inoreder ke start se to pos-1)tak , and right ke liye (pos+1 to inorder ke last tak)

// t.c.=O(n2) 

/*
int findposition(int in[], int element, int n){
	for(int i=0;i<n;i++){
		if(in[i]==element){
			return i;
		}
	}
	return -1;
}


Node*solve(int in[] , int pre[] ,  int& index, int instart, int inend, int n){
	//base case
	if(index>=n  || instart>inend ){
		return NULL;
	}

	int element=pre[index++];

	Node*root=new Node(element);

	//find position
	int postion= findposition(in , element , n);


	root->left = solve(in, pre, index , instart , position -1, n);
	root->right= solve(in, pre, index , position+1,  inend, n);


	return root;
}


Node* builtTree(int in[], int pre[], int size){
	int preOrderIndex=0;
	int n=size;

	Node*ans= solve(in, pre, preOrderIndex, 0, n-1,n );

	return ans;
}
} 
*/


// hum map ke help se ese T.c.=O(n ) mai kar sakte in postion wale ko map kar ke 

/*
void createmapping(int in[], map<int,int>& NodeToIndex, int n){
	for(int i=0;i<n;i++){
		NodeToIndex[in[i]]=i;
	}
}


Node*solve(int in[] , int pre[] ,  int& index, int instart, int inend, int n,map<int,int>& NodeToIndex){
	//base case
	if(index>=n  || instart>inend ){
		return NULL;
	}

    //craete a root node for element
	int element=pre[index++];
	Node*root=new Node(element);


	//find position
	int postion= NodeToIndex[element];


	root->left = solve(in, pre, index , instart , position -1, n,NodeToIndex);
	root->right= solve(in, pre, index , position+1,  inend, n, NodeToIndex);


	return root;
}


Node* builtTree(int in[], int pre[], int size){
	int preOrderIndex=0;
	int n=size;

//create node to index map
	map<int,int>NodeToIndex;
	createmapping(in ,NodeToIndex, n);

	Node*ans= solve(in, pre, preOrderIndex, 0, n-1,n, NodeToIndex );

	return ans;
}
} 

*/







//construct tree when inorder and postorder is given
/*
class Solution {
  private:
  void create_mapping(vector<int>& inorder, map<int,int>& nodetoindex){
      for(int i=0;i<inorder.size();i++){
          nodetoindex[inorder[i]]=i;
          
      }
  }
  
  
  
  Node*solve(vector<int> &inorder, vector <int>&postorder , int &index, int instart, int inend, map<int,int>&nodetoindex){
      
      //base case
      if(index<0 || instart>inend){
          return NULL;
      }
      
      
      int element = postorder[index--];
      Node*root=new Node(element);
      
      int position=nodetoindex[element];
      
      //recursive call (in case of inorder and psotorder we first build  the right sub tree)
      root->right=solve(inorder, postorder, index, position+1, inend, nodetoindex);
      root->left=solve(inorder, postorder, index, instart, position-1, nodetoindex);
      
      return root;
  }
  
  
  public:

    Node* buildTree(vector<int> inorder, vector<int> postorder) {
        
        int postorderindex=postorder.size()-1;
        
        //create mapping of inorder ( node to index)
        map<int,int>nodetoindex;
        create_mapping(inorder, nodetoindex);
        
        Node*ans=solve(inorder, postorder, postorderindex, 0, inorder.size()-1, nodetoindex);

        return ans;        
        
        
    }
};*/















//Minimum time to burn a tree/burining tree problem

/*
class Solution {
  public:
    Node* create_mapping(Node* root, map<Node*,Node*>& nodeToParent , int target){
        
        queue<Node*>q;
        q.push(root);
        
        nodeToParent[root]=NULL;
        
        Node*res=NULL ;
        while(!q.empty()){
            Node*temp=q.front();
            q.pop();
            
            //find target node 
            if(temp->data==target){
               res=temp; 
            }
            
            if(temp->left){
                // parent mark
                nodeToParent[temp->left]=temp;
                q.push(temp->left);
            }
            
            if(temp->right){
                //parent mark
                nodeToParent[temp->right]=temp;
                q.push(temp->right);
            }
        }
        return res;
        
    }
    
    int burningtree(Node*root , map<Node*,Node*> &nodeToParent){
        
        //visisted map needed to track visited or not 
        map<Node*, bool>visisted;
        
        //queue needed for traversal
        queue<Node*>q;
        q.push(root);
        visisted[root]=true;
        
        //time to burning 
        int time=0;
        
        
        while(!q.empty()){
            bool flag=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                //process neghbouring nodes
                    Node*temp=q.front();
                    q.pop();
                
                if(temp->left && !visisted[temp->left]){
                    flag=true;
                    q.push(temp->left);
                    visisted[temp->left]=true;
                }
                
                if(temp->right && !visisted[temp->right]){
                    flag=true;
                    q.push(temp->right);
                    visisted[temp->right]=true;
                }
                
                if(nodeToParent[temp] && !visisted[nodeToParent[temp]]){
                    flag=true;
                    q.push(nodeToParent[temp]);
                    visisted[nodeToParent[temp]]=true;
                }
            }
            
            
            if(flag==true){
            time++;
            }
            
        }
        
        return time;
        
    }
    int minTime(Node* root, int target) {
        //step-1 :create a mapping for node to parent using level order travesal
        //step-2 :find the target node
        //step-3 :burn the tree (ek trah ka breath first search karte h)
        
        
        //step1 & step 2 combine
        map<Node*, Node*>nodeToParent;
        Node*targetNode= create_mapping(root, nodeToParent, target);
        
        
        
        int time=burningtree(targetNode , nodeToParent);
        
        return time;
        
        
    }
};*/









// Morris Traversal(ye inorder traversal print karta h )//without recursion ,without stack(important)
// fayda ye h ki ye T.C=O(n) and Space complexity=O(1) leta h 

/*
class Solution {
  public:
    Node* find(Node* curr) {
        Node* pred = curr->left;
        while (pred->right != nullptr && pred->right != curr) {
            pred = pred->right;
        }
        return pred;
    }

    
    //morris travesal
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        Node*curr=root;
        while(curr !=NULL){
            if(curr->left==NULL){
                ans.push_back(curr->data);
                curr=curr->right;
            }
            else{
                
                //find predessor
                Node* predessor=find(curr);
                //tempry link creation
                if(predessor->right==NULL){
                    predessor->right=curr;
                    curr=curr->left;
                }
                else{
                    //tempory link removal
                    predessor->right=NULL;
                    ans.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }
        return ans;
        
    }
};*/








//Flatten binary tree to linked list

/*
class Solution {
  public:
    void flatten(Node *root) {
        //this question is solved using morris traversal
        
        Node*curr=root;
        
        while(curr!=NULL){
            
            if(curr->left){
                
                Node*predessor=curr->left;
                while(predessor->right){
                    predessor=predessor->right;
                }
                
                predessor->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
                
                
            }
            curr=curr->right;
        }
        
        
    }
};*/
#include<iostream>
using namespace std;

// zig-zag traversal /Spiral traversal

// Hint: Solve by sing level order traversal

/*

class Solution {
  public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root) {
        // Code here
        vector<int>result;
        if(root==NULL){
            return result;
        }
        
        queue<Node*>q;
        q.push(root);
        
        //maine ek flag banaya jo hme bateyega ki left to right jana h or right to left jana h 
        bool LeftToRight=true;
        
        while(!q.empty()){
            
            int size=q.size();
            
            vector<int>ans(size);
            
            //level process
            for(int i=0;i<size;i++){
                Node*temp=q.front();
                q.pop();
                
                //checking left to right true h to index sidhe  or
                //right to left dalna h to index ulta 
                int index=LeftToRight  ? i : size-i-1;
                
                ans[index]=temp->data;
                
                
                if(temp->left !=NULL){
                    q.push(temp->left);
                }
                if(temp->right !=NULL){
                    q.push(temp->right);
                }
                
            }
            
            //for changing direction
            LeftToRight= !LeftToRight;
            
            //copying level data
            for(auto i:ans){
                result.push_back(i);
            }
            
            
        }
        return result;
    }
};*/




//Boundaray Traversal 


//approach
//pahle left most nodes ko print karte jauga ,excluding leaf node leaf aate hi ruk jauga
//fir sare leaf nodes print karauga 
//fir reverse order mai right most ndes print karauga, root se pahle ruk jauga ,excuding leaf also 


/*
class Solution {
  public:
  void traverseLeft(Node*root,vector<int> &ans){
      if(root==NULL){
          return;
      }
      if(root->left==NULL && root->right==NULL){
          return;
      }
      
      ans.push_back(root->data);
      
      if(root->left){
          traverseLeft(root->left,ans);
      }
      else{
          traverseLeft(root->right,ans);
      }
  }
  
  
  
  void traverseLeaf(Node*root , vector<int>&ans){
      if(root==NULL){
          return;
      }
      
      if(root->left==NULL && root->right==NULL){
          ans.push_back(root->data);
          return;
      }
      
      traverseLeaf(root->left,ans);
      traverseLeaf(root->right,ans);
  }
  
  
  
  void traverseRight(Node*root , vector<int>&ans){
      if(root==NULL){
          return;
      }

      if(root->left==NULL  && root->right==NULL){
          return;
      }
      
      if(root->right ){
          traverseRight(root->right,ans);
      }
      else{
          traverseRight(root->left,ans);
      }
      
      ans.push_back(root->data);
  }
  
    
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        
        vector<int>ans;
        
        if(root==NULL){
            return ans;
        }
        
        //store/print the root 
        ans.push_back(root->data);
        
        
        
        //store/print the left sub tree
        traverseLeft(root->left,ans);
        
        
        
        //store/print the leaf node
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
        
        
        
        //store/print the right sub tree
        traverseRight(root->right,ans);
        
        
        return ans;
        
    }
};*/



//Vertical Tree Traversal

/*

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // Your code here
      map<int,map<int,vector<int>>>nodes;//hd->level->nodes
      
      queue<pair<Node*,pair<int,int>> > q; //node,hd,level
        
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node*,pair<int,int>>temp=q.front();
            q.pop();
            
            Node*frontNode=temp.first;
            
            int hd=temp.second.first;
            int lvl=temp.second.second;
            
            nodes[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left ,make_pair(hd-1 ,lvl+1)));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right ,make_pair(hd+1  ,lvl+1)));
            }
        }
        
       vector<vector<int>> ans;

        for (auto i : nodes) {
             vector<int> col;
        for (auto j : i.second) {
        for (int val : j.second) {
            col.push_back(val);
        }
        }
        ans.push_back(col);
        }

        
        return ans;
    }
};*/






//Top View of Binary Tree 
/*
class Solution {
  public:
  
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        
        map<int,int>topNode; //Horizontal distance, node_data
        
        queue<pair<Node*,int>>q; //root,Horizontal distance
        
        q.push(make_pair(root,0));
        
        while( ! q.empty()){
            pair<Node*,int>temp=q.front();
            q.pop();
            
            Node*frontNode= temp.first;
            int hd=temp.second;
            
            
            //check kr rhe h ki ki us node ke horizontal distance ke corrospinding khali h ki bhara h 
            //agar khali h to dalo nhi to rhne do  
            if(topNode.find(hd)==topNode.end()){
                topNode[hd]=frontNode->data;
            }
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left , hd-1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right , hd+1));
            }
        }
        vector<int>ans;
        for(auto i: topNode){
            ans.push_back(i.second);
        }
        
        return ans ;
    }
};*/





//Bottom View of Binary tree
/*
class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        
        map<int,int>bottomNode;  //horizontal distance, node_data
        
        queue<pair<Node*,int>>q;
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            q.pop();
            
            Node*frontNode=temp.first;
            
            int hd=temp.second;
            
            //update karte jao last wala element tak 
            bottomNode[hd]=frontNode->data;
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left , hd-1));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right , hd+1));
            }
        }
        
        vector<int>ans;
        for(auto i : bottomNode){
            ans.push_back(i.second);
        }
        
        return ans;
    }
    
};*/




//left view of Binary tree

/*
class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        //Mujhe har level ki first node ko print karna h bas
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        
        map<int,int>leftNode;
        
        queue<pair<Node* , int>>q;
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int>temp=q.front();
            q.pop();
            
            Node*frontNode=temp.first;
            
            int lvl=temp.second;
            
            //sirft 1st elemnt dalna
            if(leftNode.find(lvl)==leftNode.end()){
                leftNode[lvl]=frontNode->data;
            }
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left , lvl+1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right , lvl+1));
            }
        }
        
        
        for(auto i: leftNode){
            ans.push_back(i.second);
        }
        
        return ans;
        
        
    }
};*/



//another way of left view (recursively and easy way)

/*
class Solution {
    void solve(Node* root, vector<int>& ans, int level){
        if(root==NULL){
            return;
        }
        
        //you enetr into neew level
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        
        solve(root->left, ans, level+1);
        solve(root->right, ans, level+1);
        
    }
  public:
    vector<int> leftView(Node *root) {
        vector<int>ans;
        
        solve(root, ans, 0);
        
        
        return ans;
    }
};*/






//right view of binary tree
/*
// Should return  right view of tree
class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // Your Code here
        
        //bas level travel karna h or last walae se map karna h 
        
        vector <int>ans;
        if(root==NULL){
            return ans;
        }
        
        map<int,int>RightNode;
        
        queue<pair<Node*, int>>q;
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            
            pair<Node*,int>temp=q.front();
            q.pop();
            
            Node*frontNode=temp.first;
            
            int lvl=temp.second;
            
            //data update karte rhna take rightwala dal jaye
            RightNode[lvl]=frontNode->data;
            
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left,lvl+1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right,lvl+1));
            }
            
        }
        
        for(auto i: RightNode){
            ans.push_back(i.second);
        }
        
        return ans;
        
    
    }
};*/


//another way to solve 
/*
class Solution {
      void solve(Node* root, vector<int>& ans, int level){
        if(root==NULL){
            return;
        }
        
        //you enetr into neew level
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        
        //only the call changes (right wali upar aa jaygegi)
        solve(root->right, ans, level+1);
        solve(root->left, ans, level+1);
        
        
    }
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // Your Code here
        vector<int>ans;
        
        solve(root, ans, 0);
        
        
        return ans;
        
    }
};*/




//Homework : Diagonal Tree Traversal
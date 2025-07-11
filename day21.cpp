#include<iostream>
using namespace std;

// sort 0,1,2 in linklist 


// approach 1:
// count banake 

// Node* sortList(Node *head){
//     // Write your code here.
//     int zero_count=0;
//     int One_count=0;
//     int two_count=0;
//     Node*temp=head;
//     while(temp !=NULL){
//         if(temp->data==0){
//             zero_count++;
//         }
//         else if(temp->data==1){
//             One_count++;
//         }
//         else if(temp->data==2){
//             two_count++;
//         }
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp!=NULL){
//         if(zero_count!=0){
//             temp->data=0;
//             zero_count--;
//         }
//         else if(One_count !=0){
//             temp->data=1;
//             One_count--;
//         }
//         else if(two_count!=0){
//             temp->data=2;
//             two_count--;
//         }
//         temp=temp->next;
//     }
//     return head;
// }



//approach 2 use (when data replacement is not allowed)

// void InserttoTail(Node*&tail,Node*curr){
//     tail->next=curr;
//     tail=curr;
// }

// Node* sortList(Node *head){
//     // Write your code here.

//     Node*zeroHead=new Node(-1);
//     Node*zeroTail=zeroHead;

//     Node*oneHead=new Node(-1);
//     Node*oneTail=oneHead;

//     Node*twoHead=new Node(-1);
//     Node*twoTail=twoHead;

//     Node*curr=head;

// //create seperate list for 0's ,1's, 2's 
//     while(curr!=NULL){
//         int val=curr->data;

//         if(val==0){
//             InserttoTail(zeroTail,curr);
//         }
//         else if(val==1){
//             InserttoTail(oneTail,curr);
//         }
//         else if(val==2){
//             InserttoTail(twoTail,curr);
//         }
//         curr=curr->next;
//     }


//     //merge 3 sublist 

//     if(oneHead ->next != NULL){
//         //1's list-->  is not empty
//         zeroTail->next=oneHead->next;
//     }
//     else{
//         //1's list --> is empty
//         zeroTail->next=twoHead->next;
//     }
    
//     oneTail->next=twoHead->next;

//     twoTail->next=NULL;

// //set up head
//     head=zeroHead->next;

// //delete dummy nodes
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;

//     return head;
// }






// /Merge two sorted linklist
// #include <bits/stdc++.h>

// /************************************************************

//     Following is the linked list node structure.
    
//     template <typename T>
//     class Node {
//         public:
//         T data;
//         Node* next;

//         Node(T data) {
//             next = NULL;
//             this->data = data;
//         }

//         ~Node() {
//             if (next != NULL) {
//                 delete next;
//             }
//         }
//     };

// ************************************************************/
// Node<int>* solve(Node<int>* first, Node<int>* second){
//     if(first->next==NULL){
//         first->next=second;
//         return first;
//     }


//     Node<int>*prev=first;
//     Node<int>*curr1=first->next;
//     Node<int>*curr2=second;
//     Node<int>*next=NULL;


//     while(curr1 !=NULL && curr2 !=NULL){
//         if((curr2->data >= prev->data)  && (curr2->data < curr1->data)){
//             prev->next=curr2;
//             next=curr2->next;
//             curr2->next=curr1;

//             prev=prev->next;
//             curr2=next;

//         }
//         else{
//             prev=curr1;
//             curr1=curr1->next;

//             if(curr1==NULL){
//                 prev->next=curr2;
//                 return first;
//             }
            
//         }
//     }
//     return first;
// }


// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     // Write your code here.
//     if(first==NULL){
//         return second;
//     }
//     if(second==NULL){
//         return first;
//     }

//     if(first->data <=second->data){
//         return solve (first,second);
//     }
//     else
//     {
//         return solve(second,first);
//     }
// }




//palindrome in linklist 
// approach 1:
// create and arry 
// copy linklist content 
// and check array palindrome or not 

// t.c. and s.c =O(n);
/*
class Solution {
  private:
  bool palindrome(vector<int>&arr){
      int start=0;
      int end=arr.size()-1;
      
      while(start<=end){
          if(arr[start]!=arr[end])
          return 0;
          start++;
          end--;
      }
      return 1;
  }
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        vector<int>arr;
        Node*temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        return palindrome(arr);
        
        
    }
};
*/


// approach 2:
// 1. middle thak pahucho linklist ke 
// 2. middle ke  aage wale element ko reverse kar lo
// 3.compare both halfes start to middle ,middle+1 to end if same then palindrome
// 4. fir list jais ethe pahle wiase hi bana do(optimal)

// t.c =O(n) and s.c =o(1);

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution {
  private:
  Node*getMiddle(Node*head){
      Node*slow=head;
      Node*fast=head->next;
      
      while(fast !=NULL && fast->next !=NULL){
          slow=slow->next;
          fast=fast->next->next;
          
      }
      return slow;
  }
  
  Node* reverse(Node*head){
      Node*curr=head;
      Node*prev=NULL;
      Node*cn=NULL;
      
      while(curr !=NULL){
          cn=curr->next;
          curr->next=prev;
          prev=curr;
          curr=cn;
          
      }
      return prev;
  }
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        
        //if list is empty or  single element 
        if(head==NULL || head->next==NULL){
            return true;
        }
        
        //step 1. find middle
        Node*mid = getMiddle(head);
        
        
        //step 2. reverse list after middle
        Node*temp=mid->next;
            mid->next =reverse(temp);
            
            
        //step 3.compare both halfes
        Node*head1=head;
        Node*head2=mid->next;
        
        while(head2!=NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        
        
        //step 4. repeat step 2 jaise list thi waise hi bhej saku wapas(optimal)
        temp=mid ->next;
        return true;
        
        
    }
};
*/


//add two numbers
// 2 types : 
// Add two number represented by linklist
// add 1 to a number represented by linklist 


// approach :
// reverse the given dono linklist 
// fir maine dono ko sum kar diya 
// fir ans wer wali linklist ko fir se reverse kar diya taki sahi answer aaa jaye
// lekin asnwer mai leading 0 h sirf to sirf ek zero return karna ye check akr lena return karne se pahle 

/*
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};



class Solution {
  public:
  Node*reverse(Node*head){
      
      Node*prev=NULL;
      Node*curr=head;
      Node*temp=NULL;
      
      while(curr!=NULL){
          temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
      }
      return prev;
      
      
  }
  void InsertatTail(Node*&head,Node*&tail,int digit){
      Node*temp=new Node(digit);
      //empty list case
      if(head==NULL){
          head=temp;
          tail=temp;
          return ;
      }
      else {
          //Non empty lsit
          tail->next=temp;
          tail=temp;
          return;
      }
      
      
  }
  
  Node*add(Node* num1, Node* num2){
      
      Node*anshead=NULL;
      Node*anstail=NULL;
      int carry=0;
      
      while(num1!=NULL || num2 !=NULL || carry!=0){
            int val1=0;
            if(num1 !=NULL){
                val1=num1->data;
            }
            int val2=0;
            if(num2 !=NULL){
                val2=num2->data;
            }
            int sum= val1 + val2 + carry;
            int digit=sum%10;
            
            //create node and add in answer LL
            InsertatTail(anshead, anstail, digit);
            
            carry=sum/10;
            
            if(num1!=NULL)
            num1=num1->next;
            
            
            if(num2 !=NULL)
            num2=num2->next;
          
      }
      
      return anshead;

  }
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        
        // step1->reverse both LL
        num1=reverse(num1);
        num2=reverse(num2);
        
        
        // step2->add two LL
        Node*ans=add(num1,num2);
        
        
        //reverse the ans LL
        ans=reverse(ans);
        
        // remove leading zeros if any (except if answer is just 0)
        while(ans != NULL && ans->data == 0 && ans->next != NULL) {
            Node* temp = ans;
            ans = ans->next;
            delete temp;
        }

        
        return ans;
        
        
        
    }
};
*/








//clone a linklist ke node data, next pinter, and random pointer (hard level )
//approach
//step 1. clone LL mai next pointer and node bana lete h pahle 
//step 2.mapping karte h original Linklist and Clone Linklist ki
//step 3.ab random pointer  set kar dete h clone list mai

/*
class Solution {
 private:
  void InsertatTail(Node*&head,Node*&tail,int data){
      Node*insert=new Node(data);
      if(head==NULL){
          head=insert;
          tail=insert;
          return ;
      }
      else{
          tail->next=insert;
          tail=insert;
          return;
      }
  }
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        
        Node*cloneHead=NULL;
        Node*cloneTail=NULL;
        //step 1 clone LL mai next pointer and node bana lete h pahle
        Node*temp=head;
        while(temp!=NULL){
            InsertatTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
            
        }
        
        
        //mapping karte h original Linklist and Clone Linklist ki
        
        unordered_map<Node*,Node*>mapping;
        
        Node*originalList=head;
        Node*cloneList=cloneHead;
        
        while(originalList !=NULL){
            mapping[originalList]=cloneList;
            
            originalList=originalList->next;
            cloneList=cloneList->next;
        }
        
        //ab random pointer  set kar dete h clone list mai
        
        originalList=head;
        cloneList=cloneHead;
        
        while(originalList !=NULL){
            cloneList->random=mapping[originalList->random];
            
            originalList=originalList->next;
            cloneList=cloneList->next;
        }
        return cloneHead;
        
        
    }
};
*/


// another approach : 
// Step 1: Create a clone LL
// Step 2: Insert clone nodes in between original nodes
// Step 3: Copy random pointers
// Step 4: Revert the changes and extract the clone list
// Step 5: Return cloned list


/*
class Solution {
    
    
  private:
    void InsertatTail(Node* &head, Node* &tail, int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node *cloneLinkedList(Node *head) {
        // Step 1: Create a clone LL
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;
        while(temp != NULL){
            InsertatTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        // Step 2: Insert clone nodes in between original nodes
        Node* original = head;
        Node* clone = cloneHead;
        while(original != NULL && clone != NULL){
            Node* next = original->next;
            original->next = clone;
            original = next;

            next = clone->next;
            clone->next = original;
            clone = next;
        }

        // Step 3: Copy random pointers
        Node* curr = head;
        while(curr != NULL){
            if(curr->next != NULL){
                curr->next->random = (curr->random != NULL) ? curr->random->next : NULL;
            }
            curr = curr->next->next;
        }

        // Step 4: Revert the changes and extract the clone list
        original = head;
        clone = cloneHead;

        while(original != NULL && clone != NULL){
            original->next = clone->next;
            original = original->next;

            if(original != NULL){
                clone->next = original->next;
            } else {
                clone->next = NULL;
            }

            clone = clone->next;
        }

        // Step 5: Return cloned list
        return cloneHead;
    }
};
*/





//Merge sort in Linklist 
// Approach:

/*

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };

node* findMid(node*head){
    node*slow=head;
    node*fast=head->next;

    while(fast !=NULL && fast ->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node*Merge(node*left,node*right){

    if(left ==NULL){
        return right;
    }
    if(right ==NULL){
        return left;
    }
    
    node*ans=new node(-1);
    node*temp=ans;

    while(left !=NULL && right !=NULL){
        if(left->data  <  right->data){
            temp->next=left;
            temp=left;
            left=left->next;

        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }

    while(left !=NULL){
        temp->next=left;
        temp=left;
        left=left->next;
    }
    while(right !=NULL){
        temp->next=right;
        temp=right;
        right=right->next;
    }

    ans=ans->next;

    return ans;
}

node* mergeSort(node *head) {
    // Write your code here.
    
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //finding Mid 
    node*mid=findMid(head);

    //break into halfes
    node*left=head;
    node*right=mid->next;
    mid->next=NULL;


    //sort both halfes
    left=mergeSort(left);
    right=mergeSort(right);


    //merge both halfes
    node*ans=Merge(left,right);


    //return ans
    return ans;

}
*/



//h.w. Why you preffered quick sort in linklist and quick sort in arrays ? (most important for interview question)




// Flatten A Linked List
// Output:
// 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → 12 → 20 → null.

// Explanation:
// The returned linked list should be in a sorted order. All the elements in this returned linked list are connected by 'child' pointers and 'next' pointers point to null.



/*
Node* Merge(Node* list1, Node*list2){
	if(list1==NULL){
		return list2;
	}

	if(list2==NULL){
		return list1;
	}
	Node*ans= new Node(-1);
	Node*temp=ans;

	while(list1 !=NULL && list2 !=NULL){
		if(list1->data < list2->data){
			temp->child=list1;
			temp=list1;
			list1=list1->child;
		}
		else{
			temp->child=list2;
			temp=list2;
			list2=list2->child;
		}

	}
	while(list1 !=NULL){
		temp->child=list1;
		temp=list1;
		list1=list1->child;
	}
	while(list2 !=NULL){
		temp->child=list2;
		temp=list2;
		list2=list2->child;
	}
	ans=ans->child;

	return ans;


}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	//base case
	if(head==NULL || head->next==NULL){
		return head;
	}


	Node*down=head;

	// Flatten the child and next lists first
	Node*right=flattenLinkedList(head->next);

	// Disconnect child and next to avoid confusion
	down ->next=NULL;


	// Merge 
	Node*ans=Merge(down,right);

	return ans;	
}*/


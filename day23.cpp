#include<iostream>
#include<stack>
#include <cstring>
using namespace std;


/*
//Reverse a string using stack
//stack mai koi bhi chij dalo wo reverse karke de dega (property of stack)
int main(){

    string str="VinayTiwari";

    stack <char> s;

    for(int i=0;i<str.length();i++){
        //push into the stack
        s.push(str[i]);
    }

    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        //pop into the stack
        s.pop();
    }
    cout<<"Answer is : "<< ans;
}
*/



//Delete middle element in stack
/*
void solve(stack<int>&inputStack, int count, int size){
   //base case
   if(count==size/2){
      inputStack.pop();
      return;
   }

   //top element ko side mai rakh liya 
   int sum =inputStack.top();


   inputStack.pop();

   //recursive call
   solve(inputStack,count+1,size);

   //fir waps dal diya jo nikla tha 
   inputStack.push(sum);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count=0;
   solve(inputStack,count,N);
   
}
*/





//valid paranthiesis

/*
bool isValidParenthesis(string s)
{
    // Write your code here.
    stack <char> stk;

    for(int i=0;i<s.length();i++){

        char ch=s[i];

        //if opening brackets stack push 
        if(ch=='(' || ch=='{' || ch=='['){
            stk.push(ch);
        }
        else{
            //if stack is not empty  then only do this 
            if(!stk.empty()){
                //if closing brackets and match with opening bracktes of the top of stack present then pop 
                if((ch==')'&& stk.top()=='(') || (ch=='}'&& stk.top()=='{')  || (ch==']'&& stk.top()=='[')){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }


    }
    
    //at last check stack is empty or not is stack is empty then balanced paranthesis otherwise not balanced
        if(stk.empty()){
            return true;
        }
        else {
            return false;
        }
}*/





// Insert An Element At Its Bottom In A Given Stack


/*
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // base case
    if(myStack.empty()){
        myStack.push(x);

        return myStack;
    }


    int num=myStack.top();
    myStack.pop();

    //recursive call
    pushAtBottom(myStack,x);

    myStack.push(num);

    return myStack;
}*/







// Reverse Stack Using Recursion

// step 1->stack top ko side mai rakh lo
// step 2->use recursion to reverse remaining stack
// step 3->wapas aate wakt insert at bottom kar do

/*
void insertAtBottom(stack<int> &stack,int num){
    if(stack.empty()){
        stack.push(num);
        return;
    }

    int temp=stack.top();

    stack.pop();

    //recursive call
    insertAtBottom(stack,num);

    stack.push(temp);

}


void reverseStack(stack<int> &stack) {
    // Write your code here

    if(stack.empty())
    return;

    //element nikl liya top wala
    int num=stack.top();

    stack.pop();

    //recursive call
    reverseStack(stack);


    //wapas aate same insert at bottom kar dena
    insertAtBottom(stack,num);



}*/







//sort a stack

// step 1->stack top ko side mai rakh lo
// step 2->use recursion to reverse remaining stack
// step 3->wapas aate wakt sort karte hue  wapas aao
/*
#include <bits/stdc++.h> 

void sortInsert(stack<int> &stack,int num){
	if(stack.empty() || stack.top()<num){
		stack.push(num);
		return;
	}

    //stack top ko side mai rakh lo
	int temp=stack.top();
	stack.pop();

    //recursive call
	sortInsert(stack,num);


    //waps aate wakt element waps le lena
	stack.push(temp);


}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

    //stack top ko side mai rakh lo
	int num=stack.top();

	stack.pop();

    //recursive call
	sortStack(stack);

    //wapas aate wakt sort karte hue  wapas aao
	sortInsert(stack,num);
}*/
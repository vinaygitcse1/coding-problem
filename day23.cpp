#include<iostream>
#include<stack>
#include<vector>
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





//Redundant Brackets
// (medium level problem important bhi h)
/*
bool findRedundantBrackets(string &s)
{
    stack<char> st;
   
    for(int i=0;i<s.length();i++){
        char ch=s[i];

    //agar operator ya open bracket aae to stack mai push karo
        if(ch=='(' || ch=='+' || ch=='*'  || ch=='-'   ||ch=='/'){
            st.push(ch);
        }
        else{

            //agar closing bracket aae to 
            if(ch==')'){
                
                 bool isRedundant=true;
                //fir jab tak uska open bracket nhi milta tab tak loop chale or agar bich mai operator mila to not reduddant 
                //agar bracket ke bich operator nhi mila to redundant
                
                while(st.top() !='('){

                    char top=st.top();

                    if(top=='+' || top=='*'  || top=='-'   ||top=='/'){
                        isRedundant=false;
                    }
                    st.pop();

                }
                st.pop();
                if(isRedundant==true){
                    return true;
                }
            }
            
        }
    }
    return false;
    
}
*/






//Minimum cost to make string valid
/*
#include <bits/stdc++.h> 
int findMinimumCost(string str) {

//odd condition
  if(str.length()%2==1){
    return -1;
  }



  stack<char>s;
  for(int i=0;i<str.length();i++){

    char ch=str[i];


    if(ch=='{'){
      s.push(ch);
    }
    else{

      //ch is closed bracket
      if(!s.empty() && s.top()=='{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }


 //string contain only invalid expression now
int a=0;
int b=0;
  while(!s.empty()){

    if(s.top()=='{'){
      a++;
    }
    if(s.top()=='}'){
      b++;
    }
    s.pop();
  }

  int ans=(a+1)/2+(b+1)/2;

  return ans;


}
*/




//Next smaller element 
/*
#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int>ans(n);

    stack<int>s;
    s.push(-1);

    for(int i=n-1;i>=0;i--){
        int element=arr[i];
        while(s.top()>=element){
            s.pop();
        }
        //answer is stack ka top
        ans[i]=s.top();
        s.push(element);
    }

    return ans;
}
*/



//h.w. prevous smaller elemnt 
// just change the above question for loop flow get the answer




//Leetcode:84. Largest Rectangle in Histogram

//h.w.:Brue force (left se or right mai dekhna extend kar sakta hu agar kar sakat hu extent kar do last mai area nikl do , and max area nikl do )
//optimal sir kara rhe h (t.C.)=o(n)

/*
class Solution {
private:

    vector<int>prevsmaller(vector<int>arr, int n){

        stack <int>s;
        s.push(-1);

        vector<int>ans(n);
        
        for(int i=0;i<n;i++){
            int num=arr[i];

            while(s.top() !=-1  &&  arr[s.top()]>=num ){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;

    }

    vector<int>nextsmaller(vector<int>arr,int n){

        stack<int>s;
        s.push(-1);

        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            int num=arr[i];
            while(s.top() !=-1  && arr[s.top()]>=num){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
        
    }
public:
    int largestRectangleArea(vector<int>& heights) {

        int n=heights.size();

        //esme previous smaller element ke indexes aaege
        vector<int>prev(n);
        prev=prevsmaller(heights,n);


        //esme next smaller elemnt ke indexex aaege
        vector<int>next(n);
        next=nextsmaller(heights,n);

        int area=0;

        for(int i=0;i<n;i++){

            int length=heights[i];

            //jab index of next khali aae (all elemnt is equal case then)
            if(next[i]==-1){
                next[i]=n;
            }
            //dono indexes ke diiference nikl ke chrati nikl le hmne
            int breath=next[i]-prev[i]-1;

            int newarea=length*breath;

            //then maximum area nikl liya
            area=max(area,newarea);


        }

        return area;
        
    }
};*/










//celibrity problem
//  celebrity ko sab jante h , celbrity kisi ko nhi janta
// to kuch set of log diye h usme celebrity dundhna h

/*
class Solution {
  private:
  bool knows(vector<vector<int> >& mat,int a,int b){
      if(mat[a][b]==1){
          return true;
      }
      else{
          return false;
      }
  }
  
  public:
    int celebrity(vector<vector<int> >& mat) {
        // code here
        
        int n=mat.size();
        stack<int>s;
        //step 1: sare person ko stack ami dal do pahle
        
        for (int i=0;i<n;i++){
            s.push(i);
        }
        
        //step 2: do person niklo or compare karo if a Knows b to a is not celibrity like this
        
        while(s.size() != 1){
            int a=s.top();
            s.pop();
            
            int b=s.top();
            s.pop();
            
            
            if(knows(mat,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        int potentialcandidate=s.top();
        
        // step 3: verify karna ki wo sach mai celebrity h ki nhi 
        
        int rowcount=0;
        for(int i=0;i<n;i++){
            if(mat[potentialcandidate][i]==0){
                rowcount++;
            }
        }
        bool rowverifed=false;
        //celibrity kisi ko nhi janta so uska row zero hoga except diagonal
        if(rowcount==n-1){
            rowverifed=true;
        }
        
        int colcount=0;
        for(int i=0;i<n;i++){
            if(mat[i][potentialcandidate]==1){
                colcount++;
            }
        }
        
        bool colverifed=false;
        //n es liye kiya kyuki diagonal ignore karna h or celebrity ko sab janta h  
        if(colcount==n){
            colverifed=true;
        }
        
        if(rowverifed && colverifed){
            return potentialcandidate;
        }
        else{
            return -1;
        }
        
        
        
    }
};*/

// celebrity problem ke bohot sari approches h aapko wo dekhna h (h.w)



//Max rectangle in binary matrix with all 1's (important)
// t.c.=O(n)

/*
class Solution {
  private:
  vector<int> nextsmallest(vector<int>arr,int n){

    vector<int>ans(n);

    stack<int>s;
    s.push(-1);
    

    for(int i=n-1;i>=0;i--){
        int num=arr[i];

        while(s.top() !=-1 && arr[s.top()]>=num){
            s.pop();
        }

        ans[i]=s.top();
        s.push(i);

    }
    return ans;

}

vector<int>prevsmallest(vector<int>arr,int n){

    vector<int>ans(n);

    stack<int>s;
    s.push(-1);

    for(int i=0;i<n;i++){
        int num=arr[i];

        while(s.top()!=-1 && arr[s.top()]>=num){
            s.pop();
        }

        ans[i]=s.top();
        s.push(i);
    }

    return ans;

}
int largesthistogram(vector<int>M,int n){

    vector<int>prev;
    prev=prevsmallest(M,n);

    vector<int>next;
    next=nextsmallest(M,n);

    int area=0;

    for(int i=0;i<n;i++){
        int length=M[i];

        if(next[i]==-1){
            next[i]=n;
        }
        int breath=next[i]-prev[i]-1;

        int new_area=length*breath;

        area=max(area,new_area);
    }
    return area;
}
  public:
    int maxArea(vector<vector<int>> &mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        
        int area=largesthistogram(mat[0],m);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] >0){
                mat[i][j]=mat[i][j]+mat[i-1][j];
            }

        }

        int new_area=largesthistogram(mat[i],m);

        area=max(area,new_area);

    }

    return area;
        
    }
};*/



//important N stack implement in an array

// approach1 : entire array size divide by N parts or sabko ek ek part pakra do but it us not optimezed approach 


// approach 2:

/*

class NStack
{
public:
    int *arr;
    int*top;
    int*next;

    int freespot;


    NStack(int N, int S)
    {


        arr=new int[S];

        //next lagega jo :
                        // agar 0 element h that stack ,to point to next freespot
                        // agar element h to , point to niche wala element, stack top ke
        next=new int[S];

        //no of stack ke barabar top lagege
        top=new int[N];


        for(int i=0;i<N;i++){
            top[i]=-1;
        }
        for(int i=0;i<S;i++){
            next[i]=i+1;
        }
        next[S-1]=-1;
        
         freespot=0;

    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //stack overflow check karna
        if(freespot==-1){
            return false;
        }

        //index niklna
        int index=freespot;

        //index par value dalna
        arr[index]=x;

        //freespot update karna
        freespot=next[index];

        //next update karna
        next[index]=top[m-1];

        //top udate karna
        top[m-1]=index;

        return true;

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //stack underflow check karna
        if(top[m-1]==-1){
            return -1;
        }

        // push ko niche se upar taraf linkne se pop operation ho jayge

        int index=top[m-1];

        //element niklna jisko pop kiya
        int element=arr[index];

        //top ko next par lana
        top[m-1]=next[index];

        //next index ko or niche karna 
        next[index]=freespot;

        //update freeslot
        freespot=index;

        //return poped element
        return element;
    }
};*/







// Design a stack that supports getMin() in O(1) time and O(1) extra space
/*

#include<stack>
#include<limits.h>

class SpecialStack {
    public:
    stack<int>s;
    int mini=INT_MAX;

        
    void push(int data) {
        //for first element normal push
        if(s.empty()){
            s.push(data);
            mini=data;
        }
        else{
            if(data>mini){
                //agar data bada h to normal push
                s.push(data);
                
            }
            else{
                int val=2*data-mini;
                s.push(val);
                mini=data;

            }

        }
    }

    void pop() {
        //for underflow check
        
        if(s.empty()){
          return;
        }
        else{
            int curr=s.top();
            if(curr>mini){
                s.pop();
                
            }
            else{
                int val=2*mini-curr;
                s.pop();
                mini=val;
            }
        }
    }

    int top() {
        if(s.empty()){
            return -1;
        }

        int curr=s.top();
        if(curr>mini){
            return curr;
        }
        else{
            return mini;
        }
    }

    int getMin() {
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};*/
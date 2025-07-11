// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){

//     //creation of stack
//     stack <int> s;

//     //insertion or push operation in stack
//     s.push(10);
//     s.push(90);
//     s.push(50);


//     //deletion or pop operation in stack
//     s.pop();


//     //checking stack is empty or not
//     cout<<s.empty()<<endl;


//     //checking size of stack
//     cout<<s.size()<<endl;

//     //top elemnt kya para h check karne ke liye /peak operation
//     cout<<s.top()<<endl;



// }







//stack implementation without stl (using array)
#include <iostream>
using namespace std;


class stack{

    public:

    //properties
    int top;
    int *arr;
    int size;


    //constructor

    stack(int size){
        this->size=size;
        arr=new int [size];
        top=-1;
    }

    //behaviour

    //push operation
    void push(int data){
        if(size-top > 1){
        top++;
        arr[top]=data;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }


    //pop operation
     void pop(){
        if(top >=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }

     }



     //top elemnt dekhna upar se
     int peek(){
        if(top>=0)
        return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
     }


     //stack is empty  or not

     bool isempty(){
        if(top ==-1){
            return true;
        }
        else{
            return false;
        }
     }


};

int main(){
    stack s(5);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(60);

    s.pop();
    

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    // s.pop();


    cout<<"stack is empty or not  "<<s.isempty()<<endl;
}



//h.w.
// stack implementation using linklist



//implementaion 2 stack in an array
// approach
// stack 1 ko aage se array mai dala 
// stack 2 ko piche se array maia dala

class TwoStack {
public:
    int *arr;
    int top1;
    int top2;
    int size;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this->size=s;
        arr =new int [size];
        top1=-1;
        top2=size;
    }
    
    // Push in stack 1.
    void push1(int num) {
        //atleast ek empty space to present h
        if((top2-top1) > 1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }

    // Push in stack 2.
    void push2(int num) {
         if((top2-top1) > 1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};





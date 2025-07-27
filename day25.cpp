#include <iostream>
#include<queue>
#include<deque>
#include<vector>
using namespace std;

// queue reversal using stack (approach 1)

/*
class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        
        
       //solve by using stack 
        stack<int>s;
        
        while(!q.empty()){
        int element=q.front;
            q.pop();
            s.push(element);
        }
        while(!s.empty()){
        int element=s.top();
            s.pop();
            q.push(element);
        }
        return q;
        
        
    }
};
*/



//queue reversal using recursion( #approach 2)
/*
void solve(queue<int>&q){
    
    //base case
    if(q.empty()){
        return ;
    }
    
    //first elemnet store kar liya baki eleent ko bola recursion tu reverse karke le aa 
    int a=q.front();
    q.pop();
    
    //recursive call
    solve(q);
    
    //waps queue mai dalna
    q.push(a);
    
}
class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        
       solve(q); 
       return q;
    }
};
*/






//Question 2 :First negative in every window of size k

/*
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int>dq;
        vector<int>ans;
        
        //process first window of k size
        for(int i=0;i<k;i++){
            if(arr[i]<0){
                dq.push_back(i);
            }
        }
        
        //store answer of first k sized window 
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        
        //process for remaining windows
        for(int i=k;i<arr.size();i++){
           
            //removal wala logic 
            //i-dq.front() >= k i.e, aap current window se bahar ke h so aapko mujhe hatana parega, usse pahle check karna parega dq empty na ho 
            if(  !dq.empty()  &&  i-dq.front() >= k ){
                dq.pop_front();
            }
            
            
            //deque mai dalne wala logic
            if(arr[i]<0){
                dq.push_back(i);
            }
            
            
             //store answer for remaining windows
            if(dq.size()>0){
                ans.push_back(arr[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
        
        }
        
    return ans;
        
    }
};*/

//optimal approach (homework)







//reverse first k element of queue

/*
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> s;
        
        int n=q.size();
        
        
        if(k>n){
            return q;
        }
        
        //pop first k elemnt from queue and put into stack
        for(int i=0;i<k;i++){
            int element =q.front();
            q.pop();
            s.push(element);
        }
        
        //fetch from stack and push in queue 
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        
        
        //fetch first n-k element from queue and push back
        for(int i=0;i<n-k;i++){
            int element=q.front();
            q.pop();
            q.push(element);
        }
        
        return q;
    }
};*/




// question4
// Stream First Non-repeating

// approach : 
//loop chalaya start from o se string.size() tak ka
//us loop mai char dekha or uska count increse kar diya , or us char ko queue mai push kar diya 
//fir jab tak queue empty nhi jo jata tab tak ya jab tak break nhi aa jata tab tak chalate h  , 
//agar q.front() character ka count greater than 1 h to wo repeated character h 
// so hme queue se us char ko niklna hoga , otherwise us char ko hm answer wale string mai dalege or sath hi sath break mar ke bahar nikl jayge,
//fir jab niklte h agar queue empty hua to hm answer mai # dal dete h 


//count of string char ke unordered map use kiya

/*class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // COUNT STORE KARNE KE LIYE CHARCTER KA HM MAP BANAYE H 
        unordered_map<char, int>count;
        
        queue<char>q;
        
        string ans="";
        
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            
            //increase the count of character
            count[ch]++;
            
            //queue mai push kar do
            q.push(ch);
            
            
            while(!q.empty()){
            if(count[q.front()]>1){
                
                //repeating character
                q.pop();
            }
            else{
                
                //non repeating char
                ans.push_back(q.front());
                break;
                }
            
            }
        
            if(q.empty()){
                ans.push_back('#');
            }
       
        }
        return ans;
    }
};
*/





//most important question in queue 
//circular tour or gas station

/*

class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
            
        int start=0;
        int kami=0;
        int bachapetrol=0;
        
        for(int i=0;i<gas.size();i++){
            bachapetrol=bachapetrol+gas[i]-cost[i];
            if(bachapetrol<0){
                kami=kami+bachapetrol;
                start=i+1;
                bachapetrol=0;
            }
            
            
        }
        
        if(kami+bachapetrol>=0){
            return start;
        }
        else{
            return -1;
        }
        
    }
};
*/






//h.w. (implement stack using queue)
//h.w. (implement queue using stack)
//h.w. (interleaved the first half of the queue with second half)




/*

// implement " K " Queues in a single array
class Kqueue{
    public:
    int size;
    int *arr;
    int *front;
    int *rear;
    int *next;

    int freeslot;

    //constructor
    Kqueue(int n,int kq){
        size=n;
        arr=new int[size];

        next=new int[size];
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
        
    

        front=new int[kq];
        rear=new int[kq];
        for(int i=0;i<kq;i++){
            front[i]=-1;
            rear[i]=-1;
        }

        freeslot=0;

    }

    


    //push operation

    void push(int data ,int qno){

        //checking for overflow
        if(freeslot==-1){
            cout<<"No emepty space is avaliable";
            return ;
        }
        //index niklo
        int index=freeslot;

        //update freeslot
        freeslot=next[index];

        //checking first element or not
        if(front[qno-1]==-1){
            //so first elemnt
            front[qno-1]=index;   
        }
        else{
            //link new element to the prevous element
            next[rear[qno-1]]=index;
        }
        //update next
        next[index]=-1;

        //upadte rear
        rear[qno-1]=index;

        //push elemnt
        arr[index]=data;
    }


    int pop(int qno){
        //chceking underflow
        if(front[qno-1]==-1){
            return -1;
        }

        //find index to pop
        int index=front[qno-1];

        //front ko aage badao
        front[qno-1]=next[index];

        //freeslot manage
        next[index]=freeslot;
        freeslot=index;

        return arr[index];

    }

};
*/




//Sum of minimum and maximum elements of all subarrays of size k
/*

    int  sumofmaxmin(int arr[], int n, int k) {

        deque<int>max(k);
        deque<int>min(k);


        //for first k element window 
        for(int i=i;i<k;i++){

            //for max element
            while(!max.empty() && arr[i]>=arr[max.back()]){
                max.pop_back();
            }
            //for min element
            while(!min.empty() && arr[i]<=arr[min.back()]){
                min.pop_back();
            }

            max.push_back(i);
            min.push_back(i);

        }

        int sum=0;
        sum=sum + arr[max.front()]+arr[min.front()];


        //for remaining window
        for(int i=k;i<n;i++){
            //removal ka logic
            while(!max.empty() && i-max.front()>=k){
                max.pop_front();

            }
            while(!min.empty() && i-min.front()>=k){
                min.pop_front();
            }

            //dalne ka logic
                        //for max element
            while(!max.empty() && arr[i]>=arr[max.back()]){
                max.pop_back();
            }
            //for min element
            while(!min.empty() && arr[i]<=arr[min.back()]){
                min.pop_back();
            }

            max.push_back(i);
            min.push_back(i);

            sum=sum + arr[max.front()]+arr[min.front()];



        }
        return sum;

    }

int main(){
    int arr[7]={2, 5, -1, 7, -3, -1, -2}  ;
    int k=3;
    cout<<"Sum is "<<sumofmaxmin(arr,7,k);
}

*/






// h.w.: solve love babbar 450 sheets 




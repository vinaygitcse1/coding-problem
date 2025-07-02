#include <iostream>
using namespace std;

//recursion
//Mujhe sirf ek case solve karna h baki apne aap solve ho jayege (during RR prepration) & base case mujhe rukna kab h bas etna h recrsion
//when a functions call itself directly or indirectly called recursion
//apke pas big problem h uska solution depend karta h same type ki choti problem par solve by recursion

//code of factorial using recursion
int fact(int n){
    //Base case
    //need of base case: if base case is not given then stack overflow, segmentation fault happen
    if(n==0 || n==1)
    return 1;

    //recursive relation
        return n*fact(n-1);
}





//code of power of 2 in recrsion
int power(int n){

    //Base case
    if(n==0)
    return 1;

    //recursive relation
    return 2*power(n-1);
}





//print counting
void print(int n){

    //Base case
    if(n==0)
    return;

    // recursive relation
    print(n-1);

    //printing counting
    cout<<n<<"  "; 
    
}




//print counting in reverse order
void printrev(int n){

    //Base case
    if(n==0)
    return;

    //printing counting 
    cout<<n<<"  "; 

    // recursive relation
    printrev(n-1);

    
}

//fibonnacci number
int fib(int n){
    //Base case
    if(n==0 || n==1)
    return n;

    //recrsive call
    int ans= fib(n-1)+fib(n-2);
    return ans;
}



//count way to reach the N-th stairs(climb stairs problem)
int countDistinctWays(int nStairs) {
    //  Write your code here.

    //aap 0 strairs se bhi niche hue to
    if(nStairs<0)
    return 0;
     if(nStairs==0)
    return 1;

    int  ans= countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}



//say digit problem 
//ip:421
//op: four two one
void sayDigit(int n){
    //Base case
    if(n==0)
    return;

    string str[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int number=n%10;
    //recrsive relation
    sayDigit(n/10); 
    cout<<str[number] <<" ";
    
}




// checking array is soreted or not using recrsion
bool issorted(int arr[],int size){
   //base case
   if(size==0 ||size==1)
   return true;

   //solving 1 case(checking first element compare to second agar not soreted return false)
   if(arr[0]>arr[1]){
   return false;
    }
   else{
   //R.C(i.e, sorted so aab remaing par chalao)
   bool remainingpart= issorted(arr+1,size-1);
   return  remainingpart;
    }

}




//array sum uisng recursion
 int sum(int arr[],int size){
    if(size==1)
    return arr[0];

    //
    int remaingPart=sum(arr+1,size-1);
    //r.c(first element + remaing element)
    int ans= arr[0]+remaingPart;
    return ans;
 }





 //Linear Search
 bool isPresent(int arr[],int size,int key){

    //base case
    if(size==0)
    return false;

    //solving 1 case
    if(arr[0] ==key){
        return true;
    }
    else{
        //r.c
        bool remainelement= isPresent(arr+1,size-1,key);
        return remainelement;
    }
 }




 //Binary Search 
 bool BinSearch(int arr[] ,int start,int end,int key){

    //baseCase(element not found)
    if(start>end)
    return false;


    //solving 1 case(element found)
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return true;
    }



    if(arr[mid]>key){
        //r.c
        return BinSearch(arr,start,mid-1,key);

    }
    else{
        // r.c
        return BinSearch(arr,mid+1,end,key);
    }
 }



int main(){
    int n;
    cout<<"Enter the number  "<<endl;
    cin>>n;
    int arr[]={1,2,3,4,5,6,7};
    int arr2[]={2,1,3,4,8};
    int arr3[]={1,2,3};
    int arr4[]={1,2};

    //factorial
    // cout<<fact(n)<<endl;


    //power of 2 code
    //cout<<power(n);

    
    //print counting 
    // print(n);


    //print counting in reverse order 
    // printrev(n);


    //nth term of fibonnacci number 
    // cout<<fib(n);


    //count way to reach the N-th stairs(climb stairs)
    // cout<<countDistinctWays(n);


    //sayDigit Problem
    //sayDigit(n);


    //issorted array or not  problem using recursion
    //cout<<issorted(arr2,n)<<endl;


    //sum
    //cout<<sum(arr3,n);


    // Linearsearch using recursion
    // cout<<isPresent(arr,n,7);


    //Binary search using recursion
    // cout<<BinSearch(arr,0,n-1,8);


    //h.w. all binary search question solve again using recursion(must)
}
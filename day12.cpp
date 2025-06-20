#include<iostream>
#include<vector>
using namespace std;

//sieve of eratosthenes 
// complexity: O(n*loglogn) prove:  {n/2  +  n/3  +  n/5  +  n/7  +  n/11.....}==n{1/2  +  1/3  +  1/5  +  1/7  +  1/11.....}==n*hp of prime i.e. log log n=O(nloglogn)
//starting mai sabko prime mark kar do 
//fir jo jo table mai aa rha h usko non prime mark kar do 
/*
int countPrimes(int n) {
        int count=0;

        // prime ek array banaya n+1 size ka or sabme true dal diya;

        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;

        for(int i=2;i<n;i++){
            if(prime[i]){
                count ++;

                for( int j=2*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }
            
        }
        return count;
        
    }

int main(){
    int n;
    cout<<"Enter the value of n  : "<<endl;
    cin>>n;
    cout<<"Number of prime numbers before   "<<n<<"  is   "<<countPrimes(n);

    
}*/



//H.w. segmenet sieve kya hota h or uska code karna h 



//gcd code
//euclid algo for gcd/hcf gcd(a,b)=gcd(a-b,b)  or gcd(a%b,b)
/*
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}

int main(){
    int a,b;
    cout<<"enter the numbers "<<endl;
    cin>>a>>b;

    cout<< gcd(a,b);
}*/



//Modulo arthametic







//Pointers in C++
//use to store the address of variable

int main(){
    int num=10;
    cout<<num<<endl;
    
    //adress of operator
    cout<<&num<<endl;

    //pointer
    int *p=&num;

    cout<<p<<endl;


    //Both HAVE SAME OUTPUT (here * is dereference operator) i.e, value at address pointed by p;
    cout<<*p<<"  "; 
    cout<<num<<"  ";


    double d=4.8;
    double *q=&d;
    cout<<"Adress is  : "<<q<<endl;
    cout<<"Value is   : "<<*q<<endl;
    cout<<"Size of    : "<<sizeof(*q)<<endl;


    int num2=25;

    // (intilallization of pointer) 1st way 
    // int*ptr=&num;



    //(intilallization of pointer) 2nd way 
    //pahle ptr point to null fir maine usko nums 2 ka address diya 
    int *ptr=0;
    ptr=&num2;

    cout<<"Before  "<<num2<<endl;
    (*ptr)++;
    cout<<"After   "<<num2<<endl;


    //copy of pointer
    int *r=p;
    cout<<"value of p and q is " <<p<<"  "<<r<<endl;
    cout<<"Value of *p and *q is "<<*p<<"  "<<*r<<endl;


    //pointer arthametic
    int i=9;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;


    //important concept
    cout<<"before t is"<<t<<endl;
    t=t+1;
    cout<< "After t is i.e, pointing to next integer(next location)"<<t<<endl;


}









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






//Pointers in C++(part 1)
//use to store the address of variable
/*
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


    //pointer airthametic
    int i=9;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;


    //important concept
    cout<<"before t is"<<t<<endl;
    t=t+1;
    cout<< "After t is i.e, pointing to next integer(next location)"<<t<<endl;


}
*/


// pointers (part 2)
/*
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //arr point to &arr[0] but they are not equal prove is size
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    //prove
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(&arr[0])<<endl;

    //&arr != &arr[0](prove)
    cout<<&arr<<endl;
    cout<<&arr+1<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[0]+1<<endl;

    //so arr+1==&a[0]+1 also
    cout<<arr+1<<endl;
    cout<<&arr[0]+1<<endl;

    //*arr==*&arr[0];
    cout<<*arr<<endl;
    cout<<*&arr[0]<<endl;


    // arr[i]=*(arr+i)=*(i+arr)=i[arr]
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(2+arr)<<endl;
    cout<<2[arr]<<endl;


    // array and pointer 
    int *p=&arr[0];

    // difference 1
    cout<<&arr<<endl;//pahle location ka address
    cout<<&p<<endl;//pointer ka address

    // difference 2
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(p)<<endl;

    
//   difference 3
    // arr=arr+1//not possible in array(symbol table content can not be changed)
    //in arr++,arr--,--arr,++arr never possible (symbol table content can not be changed)
    p=p+1;//possible in pointer(now pointer point to arr[1])
    cout<<p<<endl;
    // ++p,p++,--p,p-- (so,possible in pointer case )

}
*/

//Character array & pointer 
/*
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";


    //int arry ke liye or char array ke liye cout function differently implementable h in case of int return address and in case of char return print the content of char array
    cout<<arr<<endl;//output is 0x61fe20
    cout<<ch<<endl; //output: abcde(impotant)


    char *c=&ch[0];
    //print entire string 
    cout<<c<<endl;

    //pointer stop when he get null charcter 
    char t='n';
    char*temp=&t;
    cout<<t<<endl;

    //

    char str[6]= "abcde";
    //tempory memory create hogi usme abcde/0 
   //memory create hogi str[6] copy abcde/0;


   char *c="abcde";
   //tempory memory create hogi usme abcde/0 
    //ek pointer bana c that point  to tempry memory ke first char ko;
    //ye bohot jada risky h ye hme zindgi mai nhi karna h 

}
*/




//pointers or functions
//pass by address
/*
void print(int *p){
    cout<<*p<<endl;
    
}
void update(int *p){
    // p=p+1;
    *p=*p+9;
    cout<<*p<<endl;

}

// here int arr[]is a pointer that is a replica of *arr 
int getSum(int arr[],int n){

    cout<<endl<<"size  "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int value=5;
    int *p=&value;
    // print(p);
    

    //cout<<"Before "<<value<<endl;
    //update (p);
    //cout<<"After "<<value<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<"sum is  "<< getSum(arr,5)<<endl;
    
}*/




//Double pointer
/*
void update(int **p){
    // p=p+1;
    //kuch change hoga -->No

    //*p=*p+1;
    //Kuch change hoga-->Yes

     **p=**p+1;
    //Kuch change hoga -->Yes

}
int main(){
   /* int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;

    cout<<i<<"  "<<*ptr<<"  "<<**ptr2<<endl;
    cout<<&i<<"  "<<*ptr<<"  "<<**ptr2<<endl;


    //Double pointers & functions
    cout<<"Before "<<i<<"  "<<*ptr<<"  "<<**ptr2<<endl;
    update(ptr2);
    cout<<"after  "<<i<<"  "<<*ptr<<"  "<<**ptr2<<endl;
*/

// mcqs
/*
int first=8;
int second=18;
int *ptr=&second;
*ptr=9;
cout<<first<<"  "<<second<<endl;
//8 9 (correct)
*/



/*
int first=6;
int *p=&first;
int*q=p;
(*q)++;
cout<<first<<endl;
//7(correct)
*/



/*
int first=6;
int *p=&first;
cout<<(*p)++<<"  ";
cout<<first<<endl;
//6 7(correct)
*/



/*
int *p=0;
int first=110;
*p=first;
cout<<*p<<endl;
//error segmentation fault(correct)
*/


/*
int first=8;
int second=11;
int *third=&second;
first=*third;
*third=*third+2;
cout<<first<<"  "<<second<<endl;
//11 13(correct)
*/


/*
float f=12.5;
float p=21.5;
float*ptr=&f;
(*ptr)++;
*ptr=p;
cout<<*ptr<<" "<<f<<" "<<p<<endl;
//21.5 21.5 21.5(correct)
*/



/*
int arr[5];
int*ptr;
cout<<sizeof(arr)<< " "<<sizeof(ptr)<<endl;
// 20 8(correct)
*/


/*
int arr[]={11,21,13,14};
cout<<*(arr)<<" "<<*(arr+1)<<endl;
//11 21

*/



/*
int arr[6]={11,21,13};
int *p=arr;
cout<<p[2]<<endl;
//13
*/



/*
int arr[]={11,12,13,14,15};
cout<<*(arr)<<" "<<*(arr+1)<<endl;
//11 12
*/



/*
int arr[]={11,21,31,41};
int*ptr=arr++;
cout<<*ptr<<endl;
// error
*/


/*
//****  important for me
char ch='a';
char*ptr=&ch;
ch++;
cout<<*ptr<<endl;
//b 
*/

/*
char arr[]="abcde";
char*p=&arr[0];
p++;
cout<<p<<endl;
//bcde
*/


/*
char str[]="babbar";
char*p=str;
cout<<str[0]<<" "<<p[0]<<endl;
//b  b

}
*/
 

/*
void update(int*p){
    *p=(*p)*2;
}
int main(){
    int i=10;
    update(&i);
    cout<<i<<endl;
    //20;
}
*/

void inc(int **p){
    ++(**p);
}
int main(){
    int num=110;
    int *ptr=&num;
    inc(&ptr);
    cout<<num<<endl;
    //111
}







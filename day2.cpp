//Bitwise operators 

// and, or, not,xor
#include <iostream>
#include <math.h>
using namespace std;
/* int main(){
    int a=4;
    int b=6;
    cout<<"a&b  "<<(a&b)<<endl;
    cout<<"a|b  "<<(a|b)<<endl;
    cout<<"a^b  "<<(a^b)<<endl;
    cout<<"~a  "<<~a<<endl;
}


// leftshift and  jab bhi use karte h to padding hmesa 0 se hoti h i.e, jo new no aate h wo 0 aate h (in case of positive no.)
//in case of negative no padding compiler dependent

// leftshift  --> *2
// rightshift --> /2

int main(){
    cout<<(17>>1)<<endl;
    cout<<(19<<4);
}*/


// fibbonachi iterative approach

// pahle a , b print kiya fir next fib=a+b kiya usk print kiya , fir b mai next fib dal diya , a mai b dal diya 
/*int main(){
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        int nextfib=a+b;
        cout<<nextfib<< " ";
        a=b;
        b=nextfib;
    }

}*/


// prime number
/*int main(){
    int n;
    cout <<"enter the number"<<endl;
    cin>>n;
    bool isPrime=0;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=1;
        break;
        }
    }
    if(isPrime){
        cout<< n<<" "<<"Not Prime";
    }
    else{
        cout<<n<< " "<< "is Prime";
    }
   
    
}*/



//Decimal to binary 

/*int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int b=0,i=0;
   while (n){
    int last_bit=n%2;
    binary=binary +last_bit*pow(10,i);
    n=n>>1;
    i++;
   }
   cout<<binary;

}*/



// binary to decimal

/*int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int decimal=0,i=0;
   while (n){
    int last_bit=n%10;
    decimal=decimal+last_bit*pow(2,i);
    n=n/10;
    i++;
   }
   cout<<decimal;
}*/



//imp Note: jab digit pe kam karte h to n%10,n/10 use karte h , jab bit level par kam karte h to n&1 karte  h

// negative no to binary code
// h.w




//Compliment of base 10
// 1.maine network mask ke trarah ek mast banaya h
// 2.fir us mask ko no. ke compliment ke sath and kar diya  

/*int main(){
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        int m=n;
        int mask=0;

        //Edge case jab value khud hi 0 ho to 
        if(n==0)
        cout<<1;
        //mask banane ka tarika
        while(m !=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }

        int ans=(~n)&mask;
        cout<< ans;

    }*/




//power of 2

/*int main(){
    int n; 
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(int i=0;i<30;i++){
        int ans=pow(2,i);
        if(ans==n){
        cout<<"True";
        break;}

    }
}*/



// 2nd way (better)
/*int main(){
    int n; 
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=1;
    for(int i=1;i<=30;i++){
        int ans=ans*2;
        if(ans==n){
            cout<<"true";
            break;
        }
    }
}*/


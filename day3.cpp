 #include<iostream>
 using namespace std;


//switch case


/*int main(){
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;

    char op;
    cout<<"Enter the operation";
    cin>>op;

    switch(op){
        case '+':
                cout<<a+b;
                break;
        case '-':
                cout<<a-b;
                break;
        case '*':
                cout<<a*b;
                break;
        case '/':
                cout<<a/b;
                break;
    }
}*/


//Note: agar aap infinite loop ke ander switch case use kar rhe h to bahar kaise aaege?
// use exit esse hm program se turant bahar aa jate h ;
/*int main(){
while(1){
    int a=1;
    switch(a){
        case 1: cout<<"In the under switch";
        break;
        case 2: cout<<"In the under switch"<<endl;
        exit(0);
    }

}*/

// Note: continue ka use in case of switch is not valid beause continue ka matlab "iss iteration ko skip karo aur agle par jao" hota hai. make only for loops(for, while, do-while)



// Question:maine aapko total cash diya apko batana h kitne 100 ke notes chaye , kitne 50 ke , kitne 10 ke , kitne 1 ke ;

/* int main(){
    int n; 
    cout<<"enter the amount"<<endl;
    cin>>n;

    int a=0;

    switch(1){
        case 1: a =n/100;
                cout<<"100 Ke "<<a <<" Notes"<<endl;
                n=n-a*100;
                a =n/50;
                cout<<"50 Ke "<<a<<" Notes"<<endl;
                n=n-a*50;
                a =n/10;
                cout<<"10 Ke "<<a<<" Notes"<<endl;
                n=n-a*10;
                a =n/1;
                cout<<"1 Ke "<<a<<" Notes";
                n=n-a*1;

    }
}*/



// functions
//  solve: bulky code, make readlbe,agar ek jagah garbar hue to har jagah change karna hota tha pahle aab nhi h tension 
/*void pow(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
        
    }
    cout<<"Answer is  : "<<ans<<endl;

}
int main(){
    int a,b,c,d,e,f;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    pow(a,b);
    cout<<"Enter the numbers"<<endl;
    cin>>c>>d;
    pow(c,d);
    cout<<"Enter the numbers"<<endl;
    cin>>e>>f;
    pow(e,f);
}*/


// even odd program
/*bool IsEvenOrOdd(int n){
    //if(n&1==0)
    if(n%2==0)
    return true;

    return false;
}
int main(){
    int n; 
    bool num;
    cout<<"Enter the number"<<endl;
    cin>>n;
    num=IsEvenOrOdd(n);
    cout<<num;   
}*/




// nCr program
/*
int fact(int n){
    if(n==0)
    return 1;
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int nCr(int n,int r){
    int p=fact(n);
    int q=fact(r)*fact(n-r);
    
    return p/q;
}

int main(){
    int n,r;
    cout<<"Enter the N    "<< "Enter the R   "<<endl;
    cin>>n>>r;
    int answer=nCr(n,r);
    cout<<answer;

}*/


//isprime using function
/* bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return 0;
    }
    return 1;                              
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
                                                  
    if(isPrime(n))
    cout<<"Number is Prime";
    else
    cout<<"number is not Prime";
}*/


//AP nth term
/*
int ap(int n){
    return 3*n+7;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=ap(n);
    cout<<ans;
}*/
 


//Total no of set bits in a and b
/*int setCount(int n){
    int count=0;
    while(n!=0){
        if(n&1){
        count++;}
        n=n>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter the numbers."<<endl;
    cin>>a>>b;

    int ans=setCount(a)+setCount(b);
    cout<<ans;
}*/


//fibonaaci series by using function

/*int fib(int n){
    if(n==1)
    return 0;

    if (n==2)
    return 1;

    int a=0,b=1;
    int sum=0;
    for(int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<fib(n); 
}*/






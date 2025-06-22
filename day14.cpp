/*
#include<iostream>

//macro creation (no need of extra storage or memory nhi pari , na ye change hone wala h i.e app pi ki value new nhi dal sakte )
//a peice of code in a program that is replaced by a value of macro
#define phi 3.14
using namespace std;

int main(){
    int r=10;
    cout<<"area of circle "<<phi*r*r;

}
*/



/*
// global variables(bad practice h ye esko use karna kyuki koi bhi function ye change kar sakta h )

#include<iostream>
using namespace std;
//global variable (jiska scope global ho gya)
int score=15;

void a(int &i){
    cout<<score<<endl;
    score=i;
}
int main(){
    int i=10;
    a(i);
    cout<<score<<endl;
}
*/



#include<iostream>
using namespace std;

/*
//inline functions
// inline function are use to reduce the function call overhead, and no extra memory usage
inline int func(int a){
    return a*a;
}
int main(){
    int a=10;
    cout<<func(a)<<endl;

}*/



/*
//defaults arguments

void print (int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int arr[5]={1,4,7,2,5};
    print(arr,5);
    cout<<endl;
    print (arr,5,2);
}*/



//constant variable
int main(){
    const int a=5;
    cout<<a;
    // a++;(not possible in constant variable )
    
}

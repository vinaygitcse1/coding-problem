#include <iostream>
using namespace std;




void update(int &c){
    c++;
}



//bad practice h ye kyu ki hm ans return kar rhe h jo func ka local variable h jiske karan hm jisko reference kar rhe h wo memeory exist  hi nhi karti
int& func(int a){
    int num=a;
    int &ans=num;
    return ans;
}
//similar ye pointer ke sath bhi bad practice h 
int *p(int n){
    int *ptr=&n;
    return ptr;
}



int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}





int main(){

    //reference variable(alayasing, one person more than one name )
    //same memory but different different name h uske 
    //new memory is not allocated here

/*
    //Creation
    int a=10;
    int z=25;
    int &y=a;
    int &x=a;
    // int &x=z;//redeclaration of reference variable is not possible

    cout<<a<<endl;
    cout<<y<<endl;
    a++;
    cout<<a<<endl;
    y++;
    cout<<a<<endl;
    cout<<x<<endl;
    */

/*
    //Why refrence variable?
    // to implement pass by reference(in pass by reference mai new moemory is not created only alaising )
    int n=25;
    cout<<"Before  "<<n<<endl;
    update(n);
    cout<<"After  "<<n<<endl;

//aap return type ko function mai bhi reference variable ka use kar sakte h (check line no 14)
//func(n);
//p(n);
   

*/






//Dynamic memory allocation
//ab tak hmne jo bhi sikha h sab stack par sikhna h hmne abhi tak heap memory ka use karna sikha hi nhi 
//heap memory stack se badi memory h uska use karne ke liye hme ---->"new " keywork ke bare mai jan na hoga 

/*
//creation of char in heap memory 
new char;
// note:hm heap memory ka naam nhi de sakte yaha hmne new char likha h jo char se heap mai char size ki ek memory ban jayege or new se address return ho jayega us char ka jo heap memory mai bana aab hm usko aacess kaise karege --> hmne sikha h pointer us se access karege 
char *ch=new char;


//creation of int in heap memory 
int * ptr=new int;

//creation of array in heap meory
int*arr=new int[5];


//mai array ka size dunga jitna hmko chaye uske size ka array create karna h 
//creation of variable size array
int n;
cout<<"Enter the size of array you need"<<endl;
cin>>n;
int *arr2=new int[n];


//taking input
for(int i=0;i<n;i++){
    cin>>arr2[i];
}


//sum 
int ans=getSum(arr2,n);
cout<<ans<<endl;

//Diffrenece static memory ke ander aapki memory auto amtically release ho jati h 
//but in heap aapko free karna parege(mannually) ,nhi to faltu ki memory ekathi hoti rhegei or aapka program crash kar sakta h 
//free kaise karte h eske liye ek keyword h "Delete" uski help se

//memory free karne ka tarika 
int *i=new int ;
delete i;
//for array deletion
int *ar=new int[50];
delete []ar;


*/



/*
//Dynamic memory alloaction of 2D array
//Creation 
int m,n;
cin>>m>>n;
int **sec=new int*[m];
for(int i=0;i<m;i++){
    sec[i]=new int [n];
}


//taking input
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>sec[i][j];
    }
}


//output

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<sec[i][j]<<"  ";
    }
    cout<<endl;
}


//Note mera kam jab ho ajyega to mujhe heap se memory delalloacte karna parega ye must h yaad rakhna 
//releasing memory in 2D array

for(int i=0;i<m;i++){
    delete []sec[i];//ye dusri wali pahle delete ki 
}
delete []sec//pahle wali baad mai (pointer jo the wo sare baad mai)
*/



//h.w. jaggered aary banana h dynamic memory allocation se

// sol.
int m;
cout<<"No of rows you needed"<<endl;
cin>>m;

int**jag=new int*[m];

for(int i=0;i<m;i++){
    jag[i]=new int[i+1];
}


//taking input
for(int i=0;i<m;i++){
    for(int j=0;j<i+1;j++){
        cin>>jag[i][j];
    }
}

//Output
for(int i=0;i<m;i++){
    for(int j=0;j<i+1;j++){
        cout<<jag[i][j]<<"  ";
    }
    cout<<endl;
}
}


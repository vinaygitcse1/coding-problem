#include <iostream>
using namespace std;

/* int main(){
    int a;
    cout<<"Enter the Number"<<endl;
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            if(i==0 ||j==0 || j==a-i-1)
            cout<<"x";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}*/


/* int main(){
    int a,i,j,k;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            cout<<" ";
        }
        for(k=0;k<2*i+1;k++){
            if(k==0|| i==a-1 || k==2*i){
            cout<<"x";}
            else{
            cout<<" ";}

        }
        cout<<endl;
    }
}*/


/*int main(){
    int a,i,j,k;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            cout<<" ";
        }
        for(k=0;k<2*i+1;k++){
            cout<<"*";

        }
        cout<<endl;
    }
}*/
// 2nd way 
/* int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    for(int i=0;i<a;i++){
        int k=0;
        for(int j=0;j<=(2*a-1);j++){
            if(j<a-i-1){
                cout<<" ";
            }
            else if(k<2*i+1){
                if(k==0|| i==a-1 || k==2*i)
                cout<<"x";
                else
                cout<<" ";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}*/
 

//  stragiht pyramid
/*int main(){
    int a,i,j,k;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            cout<<" ";
        }
        for(k=0;k<i+1;k++){
            cout<<"* ";

        }
        cout<<endl;
    }
}*/


// inverted pyramid
/*int main(){
    int a,i,j,k;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for(i=0;i<a;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(k=0;k<a-i;k++){
            cout<<"* ";

        }
        cout<<endl;
    }
}*/


// pyramid 
/* int main(){
    int a,i,j,k;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for(i=0;i<a;i++){
spaces ye logic
        for(j=0;j<a-i-1;j++){
            cout<<" ";
        }
star ka logic 
        for(k=0;k<i+1;k++){
            cout<<"* ";

        }
        cout<<endl;
    }
  for(i=0;i<a-1;i++){
space logic
        for(j=0;j<i+1;j++){
            cout<<" ";
        }
star logic
        for(k=0;k<a-i-1;k++){
            cout<<"* ";

        }
        cout<<endl;
    }
}*/



// hollow pyramid
/*int main(){
    int a,i,j,k;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            cout<<" ";
        }
        for(k=0;k<i+1;k++){
            if(k==0 || k==i)
            cout<<"* ";
            else
            cout<<"  ";

        }
        cout<<endl;
    }
  for(i=0;i<a-1;i++){
        for(j=0;j<i+1;j++){
            cout<<" ";
        }
        for(k=0;k<a-i-1;k++){
            if(k==0 || k==a-i-2)
            cout<<"* ";
            else
            cout<<"  ";

        }
        cout<<endl;
    }
}*/


// flipped solid diamond
/* int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
   
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"* ";
    }
    for(int j=0;j<2*i+1;j++){
        cout<<"  ";
    }
     for(int j=0;j<n-i;j++){
        cout<<"* ";
    }

    cout<<endl;
   }
   for(int i=0;i<n-1;i++){
    for(int j=0;j<i+2;j++)
    cout<<"* ";
    for(int j=0;j<2*(n-1-i)-1;j++)
    cout<<"  ";
    for(int j=0;j<i+2;j++)
    cout<<"* ";
    
    cout<<endl;
    
}
}*/


// fancy pattern
// hint: agar last character h to star print maat karo 

/*int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            
            cout<<i+1;
            if(j==i){

            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<n-i;
            if(j==n-i-1){

            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}*/
    


//alphabet palendrome pyramid

/*int main(){
    int n;
    cout<<"Enter the range"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<char('A'+ j)<<" ";
        }
        if(i!=0){
        int c=i-1;
        for(int j=0;j<i;j++){
            cout<<char('A'+c)<<" ";
            c--;
        }}
        cout<<endl;
    }
}*/


int main (){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int c=i;
        for(int j=0;j<i+1;j++){
            cout<<c+1;
            c--;
        }
        cout<<endl;
    }
}




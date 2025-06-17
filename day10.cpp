#include<iostream>
using namespace std;


//character arrays & strings

// strings in C++  is   -->   1 dimensional char arrays


// //length of string
// int getlenght(char ch[]){
//     int count=0;
//     for(int i=0;ch[i] != '\0';i++){
//         count ++;
//     }
//     return count;
// }


// //reverse a string
//  void getReverse(char ch[],int length){
//     int j=length-1;
//     int i=0;
//     while(i<j){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
    
// }
// // if question is in upper caseor lower  then lower case mai convert karna
// char toLowerCase(char ch){
//     if(ch >='a' && ch <='z'){
//         return ch;
//     }
//     else{
//         char temp=ch - 'A' + 'a';
//         return temp;
//     }
// } 

// bool CPalindrom(char ch[],int length){
//     int i=0;
//     int j=length-1;
//     while(i<j){
//         //for case sencetive 
//         if(ch[i]!=  ch[j])
//         return false;
//         i++;
//         j--;

//     }
//     return true;
// }

// //check palindrom or not(for Not case senitive)
// bool Palindrom(char ch[],int length){
//     int i=0;
//     int j=length-1;
//     while(i<j){
//         //not case sencetive 
//         if(toLowerCase(ch[i])!=  toLowerCase(ch[j]))
//         return false;
//         i++;
//         j--;

//     }
//     return true;
// }
// int main(){

//     //creation of character array 
//     char ch[10];


//     // input lene ka tarika in char arrays(input char by char jab tak 0\ na aa jaye )
//     cin>>ch;
    
//     //output dene ka tarika in char arrays(output char by char jab tak 0\ na aa jaye  )
//     cout<<ch<<endl;;

//     // char name [20];
//     // cout<<"Enter the name"<<endl;
//     // cin>>name;

//     // //maine bich mai null char dal diya 
//     // name[1]='\0';

//     // cout<<"Output is  "<<name<<endl;


//     // if input like a 0\ b 0\ c 0\ in this case output is a only (stop ho jata h ,first null space mai hi )
//     //if input is given Vinay Tiwari then output is Vinay (beacuase cin stop the execution jab bhi aap usko space dege , tab dege , new line denge i.e, endl )





//     // length of string 
//     int length =getlenght(ch);
//     cout<<"Length :   "<<getlenght(ch)<<endl;

//     getReverse(ch,length);
//     //reverse of string
//     cout<<"Reverse of string :   " << ch<<endl;

//     //check palindrom or not (for Case sensitive)
//     cout<<"For Case sensitive  :  "<<CPalindrom(ch,length)<<endl;

//     //check palindrom or not (for Not  Case sensitive)
//     cout<<"For Not Case sensitive "<<Palindrom(ch,length)<<endl;

//     //convert in lower case 
//     cout<<"Charcater is  "<<toLowerCase('B')<<endl;
//     cout<<"Charcater is  "<<toLowerCase('c')<<endl;


// }



//string in C++
// int main(){

//     //creation of string
//     string str=" Vinay Babbar"; 

//     //length niklna
//     cout<<str.length()<<endl;

//     // kuch add karna str mai
//     str.push_back('c');

//     cout<<str<<endl;;

//     //agar last character hatana h 
//     str.pop_back();
//     cout<<str<<endl;

// }





//valid palindrome
// faltu charcter hatane h , sabko lowercase karna h , fir palindrome check


//step 1.lower case mai change karna upper case wale ko
char ToLowerCase(char s){

    if(s>='a'&& s<='z' ||s>='0'&& s<='9' ){
        return s;
    }
    else{
        char temp=s;
        s= temp-'A'+'a';
        return s;
        
    }
}

//step2.faltu char jaise comma queston mark hash etc hatana 
string faltuChar(string s){
    string temp;
    int i=0;
    int n=s.length();
    while(i<n){
        if(s[i]>='a'&& s[i]<='z' ||s[i]>='A'&& s[i]<='Z' ||s[i]>='0'&& s[i]<='9' ){
            temp.push_back(ToLowerCase(s[i]));
            i++;
        }
        else{
            i++;
        }
    }
    return temp;
}

//step 3.palindrome check karna 
bool checkPalindrome(string s)
{
    
    string p= faltuChar(s);


    int i=0;
    int j=p.length()-1;
    while(i<=j){
        if(p[i] != p[j]){
        return false;
        }
            i++;
            j--;
    }
    return true;
}
int main(){
    string s="5?36@6?35";
    
    string p=faltuChar(s);
    if(checkPalindrome(p))
    cout<<"Yes it is Palindrome"<<endl;
    else
    cout<<"Not plaindrome"<<endl;









}





#include <iostream>
//for array STL
#include <array>

//for vector STL
#include <vector>


//for dequeue STL
#include <deque>


//for list STL
#include <list>


//for stack STL
#include <stack>



//for Queue STL or priority queue 
#include <queue>


//for SET STL
#include <set>



//for map STL
#include <map>


//for algorithm STL wala
#include<algorithm>



using namespace std;

//stl libraray in c++



//     // 1. Array (static array in stl)

// int main(){

//     int basic[3]={1,2,3};


//     //stl :  "array<array Type,array size> array name
//     array<int,4>a={1,2,3,4};


//     // stl :size niklne ka tarika stl array mai
//     int size=a.size();


//     // stl :any index access karne ka trika stl array mai "at operation"
//     cout<<"element at index 2 is "<<a.at(2)<<endl;


//     //stl :checking stl array empty or not
//     cout<<"Empty or not"<<"  "<<a.empty() <<endl;

//     //stl :return stl array first element 
//     cout<<"First element  "<<a.front()<<endl;

//     //stl : return stl arrray last element 
//     cout<<"End element  "<<a.back()<<endl;

// }





//2. vector(Dynamic arrray in stl)

// int main(){

//     //STL :creation of vector
//     vector<int>v;

//     //another way and initalize all with any number
//     // arrayname(array size,  initalize with 1 sare ko)
//     vector<int>a(5,1);



//     //copy one vector to another vector
//     vector<int>another(a);



//     //for printing 
//     for(int i:a){
//         cout<<i<<"  ";
//     }cout<<endl;



//     //STL :how much memeory abhi h vector ke pass
//     cout<<"kitne memory assign h (i.e, capacity)  "<<v.capacity()<<endl;



//     //STL :element dalna vector mai
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(50);
//     v.push_back(60);



//     cout<<"Capacity check karte h fir se  "<<v.capacity()<<endl;


//     //stl : for access the element 
//     cout<<"Element at second index   "<<v.at(2)<<endl;

    
//     //stl :return stl array first element 
//     cout<<"First element  "<<v.front()<<endl;


//     //stl : return stl arrray last element 
//     cout<<"End element  "<<v.back()<<endl;


//     //stl : Element niklne ka tarika 
//     cout<<" before pop  "<<endl;
//     for(int i:v){
//         cout<<i<<"  ";
//     }cout<<endl;


//     v.pop_back();  

//     cout<<" after pop  "<<endl;
//     for(int i:v){
//         cout<<i<<"  ";
//     }cout<<endl;


//     // vector par clear operation  karne par vector ka size 0 hota h(i.e,no of element is 0) capacity(i,e. kitne memory assighn hue pari h) 0 nahi hoti h 
//     cout<<"Before Clear size is   "<<v.size()<<endl;
//     cout<<"Before clear Capacity is "<<v.capacity()<<endl;

//     v.clear();

//     cout<<"After clear size is   "<<v.size()<<endl;
//     cout<<"after clear Capacity is "<<v.capacity()<<endl;

// }






//3.Deque

//int main(){
    
    //creation of Deque
    //deque<int> d;

    //element insertion

    //piche se dala
    //d.push_back(50);
    //aage se dala 
    //d.push_front(60);


    //for printing 
    // for(int i: d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;


    // pop karna 

    //piche se pop karna
    //d.pop_back();

    //front se pop karna 
    //d.pop_front();


    //first index element ko access karna 
    //cout<<"Print zeroth Index element   " <<d.at(0)<<endl;

    // print front and back element ,check empty or not

    //cout<< "Front -->  "<<d.front()<<endl;
    //cout<< "Back -->   "<<d.back()<<endl;
    //cout<<"Chceking empty or not "<<d.empty()<<endl;


    //erasing deque esme dena parta h aap kaha se kaha tak delete karna chate ho 


    //cout<<"Before Erasing size  -->"<<d.size()<<endl;
    //d.erase(d.begin(),d.begin()+1);
    //cout<<"After erasing size -->"<<d.size()<<endl;


//}


 




//4.list (doubly linklist h ye )

// int main(){

    //creation of list
    // list<int> l;

    //element insertion 
    // l.push_back(10);
    // l.push_back(20);
    // l.push_front(30);
    // l.push_front(50);

    //printing elements in list
    // for(int i: l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    //erasing , size of list

    // cout<<"before erasing  -->"<<l.size()<<endl;
    // l.erase(l.begin());
    // cout<<"After erasing  -->"<<l.size()<<endl;


    //poping 
    // l.pop_back();
    // l.pop_front();
    

    // copy one list to another list 
   // list<int> another(l);

    // 5 elements rakhu sabko 100 se intillize karna
    //list<int> n(5,100);
    
// }







//5. Stack

//int main(){
    //stack<int> s;

    //for push the element in stack
    // s.push(6);
    // s.push(9);
    // s.push(11);

    //jo sabse end mai jayege wo sabse pahle bahar aaege 
    //cout<<"Top element  -->  "<<s.top()<<endl;

    //pop lement
    //s.pop();

    //checking size of stack
    //cout<<"Size of stack  -->  "<<s.size()<<endl;

    //checking empty or not
    //cout<<"stack is empty or not   --> "<<s.empty()<<endl;


//}






// 6. Queue
//int main(){

    //creation
    //queue<int> q;


    //insertion
    // q.push(10);
    // q.push(50);
    // q.push(80);
    // q.push(100);


    //print top elemnt
    //cout<<"First element  -->  "<< q.front()<<endl;

     //first in first out
    // q.pop();

     //cout<<"After pop first element  -->  "<< q.front()<<endl;

     //size of queue 
     //cout<<"Size of queue now  -->  "<<q.size()<<endl;
//}







//7. Priority queue (i.e, jiska first element hmesa greatest hoga (default prioroty queue is max heap))
// jab aap element niklege to hmesa mximum elements niklega 



// int main(){

//     //creation max heap
//     priority_queue<int> maxi;

//     //creation min heap
//     priority_queue<int ,vector<int> ,greater<int> > mini;



//     //data insertion or push karna (max heap or in heap mai)

//         //max heap
//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(7);
//     maxi.push(5);
//     maxi.push(6);
//     maxi.push(3);

//     cout<<"size -->"<<maxi.size()<<endl;

//     int n=maxi.size();
//     //print karaya element fir bahar nikl diya (pop kar diya)
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<"  ";
//         maxi.pop();
//     }cout<<endl;

        
    
    
    
    
//     //min heap 

//     mini.push(1);
//     mini.push(2);
//     mini.push(7);
//     mini.push(5);
//     mini.push(6);
//     mini.push(3);

//     cout<<"size -->"<<mini.size()<<endl;

//     int n1=mini.size();
//     //print karaya element fir bahar nikl diya (pop kar diya)
//     for(int i=0;i<n1;i++){
//         cout<<mini.top()<<"  ";
//         mini.pop();
//     }cout<<endl;




//      //checking empty
//      cout<<"khali h kya bhai  -->  "<<mini.empty()<<endl;


// }





// 8. Set 

// set ke ander sirf or sirf unique elements store hote h agar aapne 5 bar 5 daal diya tab bhi set ke ander sirf ek hi bar 5 store hoga
//implementation BST (Binary search Tree)
//elemenst return in sorted order

//unoredered set (set is slow, but unoredersed set is fast)
//unoredered set se jab aap elemenst fetch ar rhe hote h to wo random aata h srted order mai nhi aate 


// int main(){
//     set<int> s;

//     //maine 2 bar 5 dal diya set mai
//     s.insert(5);
//     s.insert(5);
//     s.insert(10);
//     //maine 5 bar 20 dal diya set mai 
//     s.insert(20);
//     s.insert(20);
//     s.insert(20);
//     s.insert(20);
//     s.insert(20);
//     s.insert(1);
//     s.insert(-1);
//     s.insert(0);

//     for(int i :s){
//         cout<<i<< "  ";
//     }cout <<endl;
    

//     //erasing
//     s.erase(s.begin());

//      for(int i :s){
//         cout<<i<< "  ";
//     }cout <<endl;

//     //erasing other elements

//     set<int> :: iterator it =s.begin();
//     it++;

//     s.erase(it );

//          for(int i :s){
//         cout<<i<< "  ";
//     }cout <<endl;



//     //checking present or not
//     cout<<"Checking 20 is peresent or not  -->  "<<s.count(20)<<endl;
//     cout<<"Checking -2 is peresent or not  -->  "<<s.count(-2)<<endl;
    

//     // find function agar aapka element mil jata h to uska iterator return karta h 
//     set<int> :: iterator itr = s.find(10);

//     for (auto it=itr;it !=s.end();it++){
//     cout<<*it<<" ";}
//     cout<<endl;
//     cout<<"Value present at itr --->  "<<*it<<endl;
// }







//9.map(eske ander data key value ke form mai store hota h i.e, implementation of balanced tree or red black tree);
//unordered map (implementaion of hash table)
//yaha sare ke sare key unique hote h 
// or ek key ek hii  value ko point karegei 
//ye ho sakta h esme love is pointing to scorpio (love:scorpio)and babbar is also pointing to scorpio(babbar: scorpio)
//bat ye nhi ho sakata h love is pointing to scorpio(love:scorpio) and also love is pointing to tata nano (love:tata nano )i.e, not allowed

// int main(){
//     map<int,string> m;

//     //insertion
//     // here (map_name[Key]="Value")  

//     m[1]="vinay";
//     m[3]="arti";
//     m[2]="tiwari";
//     m[4]="vijay";  
    
    
//     //insertion 2nd way
//     m.insert( {0,"Bheem"} );
    


//     //printing (in case of map hmesa sorted aaege)
//     // (case of unoreder map jo order se insert kiye wahi aaegea)
//     //i.first for key 
//     //i.second for value

//     for(auto i:m){
//         cout<<i.first << "  " <<i.second<<" " <<endl; 
//     }cout<<endl;


//     //count Checking 6 is present or not
//     cout<<"Finding 6  --> "<<m.count(6) <<endl;


                     
//     //erasing (sirf key dene hoti h )

//     cout<<"Before erasing  "<<endl;
//     for(auto i:m){
//         cout<<i.first << "  " <<i.second<<" " <<endl; 
//     }cout<<endl;


//     m.erase(2);

//     cout<<"After erasing  "<<endl;
//     for(auto i:m){
//         cout<<i.first << "  " <<i.second<<" " <<endl; 
//     }cout<<endl;



//     //find use in map
//     auto it = m.find(1);
//     for(auto i=it; i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }

// }








//10.STL algos

// int main(){

//     vector<int> v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(50);
//     v.push_back(60);
//     v.push_back(80);

//     // hme binary search lagane h given vector par using stl

//     cout<<"Finding 40   "<<binary_search(v.begin(),v.end(),40)<<endl;
//      cout<<"Finding 60   "<<binary_search(v.begin(),v.end(),60)<<endl;


//      //iterator (index Niklna)
//      cout<<"Lower bound   "<<lower_bound(v.begin(),v.end(),30)-v.begin()<<endl;
//       cout<<"upper bound   "<<upper_bound(v.begin(),v.end(),30)-v.begin()<<endl;


//       //for maximum & Minimum 
//       int a=3;
//       int b=5;

//       cout<<"Maximum of 3,5 is   "<<max(a,b)<<endl;
//       cout<<"Minimum of 3,5 is   "<<min(a,b)<<endl;
    
//     //   for swap
//     swap(a,b);
//     cout<<"Valus of a after swap is "<<a<<endl;

//     string s="abcd";
//     // reverse the string 
//     reverse(s.begin(),s.end());
//     cout<<"String "<<s <<endl;



//     //rotate 

//     cout<<"before  roatate vector"<<endl;
//     for( int i:v){
//         cout<<i<< " ";
//     }
//     cout<<endl;


//     (rotate(v.begin(),v.begin()+2,v.end()));
//     cout<<"After roatate vector"<<endl;
//     for( int i:v){
//         cout<<i<< " ";
//     }
//     cout<<endl;



//     //sort the array (based on intro sort (quick sort, heap sort , and insertion sort))

//     sort(v.begin(),v.end());

//     cout<<"After sort the  vector"<<endl;
//     for( int i:v){
//         cout<<i<< " ";
//     }
//     cout<<endl;

                                

// }










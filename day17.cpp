#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

//OOPs






//creation of class(template or structure)


//  1st way
// #include"hero.cpp"
//class koo dusre file mai bhi bana sakte h jaise maine hero.cpp banaya h or usko es file mai use kiya h #include hero.cpp se





// class Hero {
//     //empty class (in this case aapke object ko 1 byte memory allocate ho jate h uske identification or track rakhne ke liye ,aap size nikl ke dekh sakte h )
// };




//  2nd way

class Hero{

    //properties 

    private:
    int weight;
    char level;

    
    
    public:
    int health;
    char *name;

    //static member 
    static int timeToComplete;

    //default constructor 
    Hero(){
        cout<<"Simple Constructor called"<<endl;
        name=new char[100];
    }


    //parameterised cunstructor
    Hero(int health){
        //"This " keyword is a pointer that store the current obejct address
        cout<<"This is -->  "<<this<<endl;
        //hum yaha current object i.e, shyam ke health mai parametized construter ki jo health aa rhe h wo dal rhe h 
        this ->health = health;
    }

     Hero(int health, char level,int weight){
        this ->health = health;
        this->level =level;
        this->weight=weight;
    }



    // copy constructor
    Hero(Hero& temp){
        //case of deep copy 
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name =ch;
        //


        this->health=temp.health;
        this->level=temp.level;
    }
    

    //functions
    void print(){
        cout<<endl;
        cout<<"Name is  : "<<this->name<<"  ,  ";
        cout<<"Level is : "<<this->level<<"  ,  ";
        cout<<"Health is : "<<this->health <<endl;
        cout<<endl;
    }


    //creation of getter
    int getWeight(){
        return weight;
    }
    char getLevel(){
        return level;
    }



    //creation of setter
    void setWeight(int w,char password){

        if(password=='A'){
             weight=w;
        }
    }
    void setLevel(char l){
        level =l;
    }

    void setName(char name[]) {
        strcpy(this->name, name); 
    }


    //static function
    static int random(){
        // cout<<this->health<<endl;(error beacuse this keyword is not accessible )
        // return health; (error beacuse it is not staic)
        return timeToComplete;
    }

    //Desctructor
    ~Hero(){
        cout<<"Dectroctor is called"<<endl;
    }


};


//static member intiallization outside the class
int Hero::timeToComplete=50;


int main(){

    //staic member 
    //No need of object creation 
    //directly print 
    // cout<<Hero::timeToComplete<<endl;


    // //after the object  creation 
    // // chl jayeha lekin bad practice

    // Hero a;
    // cout<<a.timeToComplete<<endl;

    // Hero d;
    // d.timeToComplete=10;

    // cout<<a.timeToComplete<<endl;
    // cout<<d.timeToComplete<<endl;


    //staic function
    //yahaa bhi object create karne ki need nhi h 
    // yaha this keyword nhi hota  (beacuse this is pointer to current obejct but yaha par to object hi nhi h)
    //staic function only access the static members 

    
    // cout<<Hero::random()<<endl;


/*
//Dectructor
//memory ko deallocated karne ke liye use karte h
//to differnceate constructor and descrtor ~ sign is used go and check in class

//same as constructor  iska namm bhi class ke name ke same hota h , no return type, no input parameter, defalut ye bhi create hote h jab tak aap create na karo tab tak

//satic
Hero a;


//Dyanamic
Hero *b=new Hero;
//or Hero *b=new Hero();

//mannually destroctor called
delete b;


// imp Note: jo bhi object aap static allocation ke dwara create karte h ,unke liye distroctor automattically called hota h 
// lekin dynamic allocation ke drwara jo aap object create karte h uske liye desctroctot aapko mannually call karna parta h 
//so delete b karne par dussri bar aaya;


// imp note : constructor har object ke liye , ek hi bar call hota h ,jab uske creation ka time hota h
// similarly  destructor har object ke liye , ek hi bar call hota h ,jab uske destruction ka time hota h


*/






/*
// copy assignment operator
//object are created already uske baad agar copy karna cha rhe h to use karte h 

Hero Vinay(10,'L',90);
Hero Akashay(30,'A',50);

Vinay=Akashay;
//Vinay.health=Akashay.health
//Vinay.level=Akashay.level
//Vinay.weight=Akashay.weight

cout<<"Health of Vinay  : "<<Vinay.health<<endl;
cout<<"Health of Akashay : "<<Akashay.health<<endl ;
cout<<"Level of Vinay  :  "<<Vinay.getLevel()<<endl;
cout<<"Level of Akashay  :  "<<Akashay.getLevel();

*/



/*

//default constructor 
//invoke automatically during object creation,no return time, no input parameter

//statically
// Hero Shyam;

//dyamically 
// Hero *h=new Hero;




//parametrized construtor 

//statically
Hero Shyam(10);
cout<<"Shyam health is :  "<<Shyam.health<<endl;
Hero Murli(5,'L',9);
cout<<"Murli health,level ,weight  :"<<Murli.health<<" "<<Murli.getLevel()<<" "<<Murli.getWeight()<<endl;

//dyamically 
Hero *h=new Hero(50);
cout<<"h health is :  "<<h->health<<endl;

Hero *B=new Hero(900,'A',60);
cout<<"B health,level ,weight  :"<<B->health<<" "<<B->getLevel()<<" "<<B->getWeight()<<endl;





//"This " keyword is a pointer that store the current obejct address
// proff
cout<<"Address of Shyam is  : "<<&Shyam<<endl;
//now go to paramerized constructor and check 


*/



/*
// copy constructor(default)

Hero ritesh(80,'M',95);


Hero Vijay(ritesh);
//ye h copu constructer 
// yaha maine 
// ritesh.health=Vijay.health
// ritesh.level=Vijay.level
// ritesh.weight=Vijay.level kar diya h bas ek line ki madad se;




*/


/*

// copy constructor(khud ka banate h aab)
Hero Pankaj(55,'k',60);

Hero S(Pankaj);
cout<<"Health of S is  :  "<<S.health<<endl;
cout<<"Level of S is   :  "<<S.getLevel()<<endl;

*/






// concept of shallow copy and deep copy in copy constructor 
// jo default copy constructor hota h wo shallow copy karta h 
// hm jo copy constructor banate h usse hm deep copy bana sakte h


//shallow copy
/*
Hero hero1(12,'D',50);;
char name[7]="Akash";
hero1.setName(name);

hero1.print();


//use default copy constructor
Hero hero2(hero1);
//another way Hero hero2=hero1;
hero2.print();


//if i change 
hero1.name[0]='G';
hero1.print();

hero2.print();

//yaha hmne print kiya to dekha ki hero 1 ka name ke sath hero2 ka name bhi change ho gya kyu ki defalut copy constructor shallow copy karta h 
//shallow copy mai hum same memory ko access kar rhe h do nam se (hero1 , hero 2 dono se )
//deep copy mai name ki ek or copy ban jati tab dono alag address ko point karwa dete hum
*/


/*
//deep copy 

Hero hero1(25,'D',70);;
char name[7]="Akash";
hero1.setName(name);

hero1.print();


//use my  copy constructor
Hero hero2(hero1);
//another way Hero hero2=hero1;
hero2.print();


//if i change 
hero1.name[0]='G';
hero1.print();

hero2.print();

//yaha hmne print kiya to dekha ki hero 1 ka name ke sath hero2 ka name bhi change ho gya kyu ki defalut copy constructor shallow copy karta h 


*/









/*
    // static allocation 
    Hero A;

    //insertion
    A.health=10;
    A.setWeight(90,'A');

    //printing
    cout<<"Health of A is  : "<<A.health<<endl;
    cout<<"Weight of A is  : "<<A.getWeight()<<endl;




    //Dyanmic  allocation
    Hero*B=new Hero;

    //insertion
    (*B).health=85;
    (*B).setLevel('D');

    //alternative way (by using arrow operator)
    B->health=88;
    B->setWeight(999,'A');

    //Printing 
    cout<<"Health of B is  : "<<(*B).health<<endl;
    cout<<"Level of B is  : "<<(*B).getLevel()<<endl;
    
    //alternative way(bu suing arrow operator)
    cout<<"Weight of B is  : "<<B->getWeight()<<endl;




*/









/*


    //creation of object
    Hero ramesh;

    //accessing properties of class/or data members
    // hum access es liye nhi kar pa rhe kyu ki class ke ander sare element by default private hote h to hume pahle use public karna hoga 
    

    ramesh.health=70;
    cout<<"Health is : "<<ramesh.health<<endl;



    //concept of getter or setter(agar koi data memeber private h usko access karne ke liye )
    
    
    ramesh.setLevel('A');

    //if i want sirf user A hi esko set kar paye (i.e, password lagana)
    ramesh.setWeight(50,'A');
    //using user B 
    ramesh.setWeight(70,'B'); //but no change


    cout<<"Level is :  "<<ramesh.getLevel()<<endl;
    cout<<"weight is : "<<ramesh.getWeight()<<endl;


    //H.w. read about padding and greedy alignment


*/



}   



#include <iostream>
using namespace std;


/*
//Encapsulation 
class Student{
    private:
        string name;
        int age;
        int height;
    public:
    int getAge(){
        return this->age;
    } 

    void setAge(int age){
         this->age=age;
    } 

};

int main(){

    //Encapsulattion : wrapping up data member(or properties or state) and functions (or methods or behaviour) in a single entity(i.e, class)

    // fully encapsulated class : all data members are private marked hote h esme , i.e, same class hi access kar payege data members ko koi or class access nhi kar sakte directly

    //advantages: encapsulation means information hiding(data hiding) to improve security 
                //If we want , we can make class " read only ";
                //Code reausability
                //encapsulation helps better for unit testing



    //Implementation
    Student First;
    First.setAge(15);
    cout<<First.getAge()<<endl;

    return 0;
}

*/





//Inheritance

// parent class also called Super class
// sub class also called Child class

/*
class Human{
    public:
    int height ;
    int age;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int weight){
        this->weight=weight;
    }

};

//child class banana(male ne inherit kar liya human ke sare properties and functions)
class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

int main(){

    Male object1;

    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;

    object1.setWeight(80);
    cout<<object1.weight<<endl;
    object1.sleep();

    

}
*/






//Access modifiers in Inheritance 

/*
class Human{
    protected:
    int weight;
    int height;

    int getHeight(){
        return this->height;
    }
    
    void setheight(int h){
        this->height=h;
    }
};

class Male : public Human{
    public:
    string color;

    int getHeight(){
        return this->height;
    }
    

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

//protected similar a kind of private aap esko aapni class mai access kar sakte h bahar access nhi kar sakte h , but aapki derived/ child class bhi access kar sakti h 
//private data member of any super class can not be inherited(not accessiable)(i.e, aap eska child class bhi nhi bana sakte )

int main(){
    Male m1;
    // m1.height ;//accessable (public mark in Human, and inherit Public mark )=>public member 
    // m1.getHeight();//(public mark in Human, and inherit procted mark)=>protected menber
    // m1.getHeight();//(public mark in Human, and inherit private mark)=> private menber


    // m1.getHeight();//(protected mark in Human, and inherit public mark)=>protected menber
    // m1.getHeight();//(protected mark in Human, and inherit protected mark)=> protected menber
    // m1.getHeight();//(protected mark in Human, and inherit private mark)=>private menber



    // private mark in Human,inherit public =Not accessable 
    // private mark in Human,inherit protected =Not accessable 
    // private mark in Human,inherit private =Not accessable 
    

}
*/






//Types of inheritance
// 1. single level , 2. Multi -level  , 3.Multiple inheritance  , 4.Hybrid inheritance  , 5. Heriarchical inheritance  


// 1.Single inhertance (A-->B)
//  (one parent one child)
// class Animal{
//     public:
//     int weight;
//     int age;

//     void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Dog:public Animal{

// };


// int main(){
//     Dog d;
//     d.speak();
//     cout<<d.age<<endl;
// }




// 2.Multi-Level inheritance (A-->B-->C-->D..)
// (Dog inherit Animal, GermenShepher inherit Dog )

// class Animal{
//     public:
//     int weight;
//     int age;

//     void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };
// class Dog:public Animal{

// };
// class GermenShepher :public Dog{

// };

// int main(){
//     GermenShepher G;
//     G.speak();
//     cout<<G.age<<endl;
// }



// 3.Multiple inheritance 
//  Animal is a class, Human is another class , dono class ko jungle inherit kar rha h 

// class Animal{
//     public:
//     int weight;
//     int age;

//     void bark(){
//         cout<<"barking"<<endl;
//     }

// };

// class Human{
//     public:
//     string color;

//      void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };

// //Multiple inheritance
// class Jungle:public Animal,public Human{

// };

// int main(){
//     Jungle J;
//     J.speak();
//     J.bark();
// }





// 4.Hierarchical inheritance 
// (one class serve as parent class for more than 1 class)
/*
class A{
    public:
    void func1(){
        cout<<"inside function 1"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"inside function 2"<<endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout<<"inside function 3"<<endl;

    }
    
};

int main(){
    A object1;
    object1.func1();

    B object2;
    object2.func2();
    object2.func1();

    C object3;
    object3.func1();
    object3.func3();
    
}

*/


// 5.Hybrid inheritance 
// (ab tak upar mai jo 4 inheitance type sikhe usme se se kisi bhi 2 ya use jada ka mixture )






//Inheritance Amibiguity
// (solve using scope resultion operator)
/*
class A{
    public: 
    void func1(){
        cout<<"I am A"<<endl;
    }

};
class B{
    public:
    void func1(){
        cout<<"I am B"<<endl;
    }
};

class C:public A,public B{

};
int main(){
    C obj;
    // obj.func1();(error kyuki c jab inherit kar rha h to dono ka "func1" mai se kis "func1 " ki baat ho rhe h ye nhi pta i.e, inhertance ambiguity)
    obj.A::func1();

    obj.B::func1();

}
*/









//Polymorphism (existing in multiple forms)
//  a man is (father, son,brother,husband,teacher, doctor,studentetc )

// Two types : Compile time Polymorphism, Run time Polymorphism
// compile time polymorphism are two types : function overloading , operator overloading



// compile time polymorphism also calles staic polymorphism
//function overloading (same function in multiple form)(name is same, signature is different)
/*
class A{
    public:
    void sayHello(){
        cout<<"Hello Vinay Tiwari"<<endl;
    }

    int sayHello(int n){
        cout<<"Hello Vinay tiwari"<<endl;
        return n;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
    obj.sayHello(10);
    obj.sayHello("Vinay");
}
*/







// operator overloading

/*
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    //operator overloading 
    void operator+( B& obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"Output  "<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"Main Bracket Hu "<<this->a<<endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;

    obj1+obj2;
    
    obj1();
}

*/




// Runtime Polymorphism/Dynamic polymorphism

// Method Overriding


// Rules:1. Method of parent class, child class must have same name 
//2. Method of parent class and child class must have same parameter
// 3.It is possible through inheritance only

//Method overriding
/*
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog  : public Animal{

    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    Dog obj;
    obj.speak();
}

*/










//Abstraction( i.e, "implementation hiding " or  jo required chize h bas wo bata do puri ram kahani batane ki need nhi h )

// abstraction usig classes achieve through access specifiers(public, protected, private)




// h.w.: interface, friend function, virtual function
//go chrome search "love babbar oops cheetsheet" 


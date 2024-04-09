#include<iostream>
#include<string.h>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple Constructor Called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp) {

        //for deep copy
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = temp.name;
    }

    void print(){
        cout << endl;
        cout << "Name: " << this->name<<endl;
        cout << "health: " << this->health << endl;
        cout <<"level: " << this->level << endl;
        cout << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char lvl) {
        level = lvl;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    //Static function
    //Static function only return Static member data.
    static int random() {
        return timeToComplete ;
    }

    //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main(){
    //creation of Object
    Hero ramesh;
    cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

    cout << "Ramesh health is " << ramesh.getHealth() << endl;
    //use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout<< "Ramesh health is: "<< ramesh.getHealth() << endl;
    cout << "Ramesh Level is: " << ramesh.level << endl;

    //Static allocation
    Hero a;
    a.setHealth(24);
    a.setLevel('J');
    cout << "Static allocation health is " << a.getHealth() << endl;
    cout << "Static allocation level is  " << a.level << endl;

    //Dynamically allocation
    Hero *b = new Hero;
    (*b).setHealth(49);
    b->setLevel('G');
    cout << "Dynamically allocation health is " << (*b).getHealth() << endl;
    cout << "Dynamically allocation level is " << (*b).level << endl;

    cout << "level is  " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;

    //object created statically
    Hero mohan(10);
    cout << "Address of mohan " << &mohan << endl;
    ramesh.getHealth();

    //dynamically
    Hero *h =  new Hero(11);
    h->print();

    Hero temp(22, 'B');
    temp.print();

    Hero S(70, 'D');
    S.print();

    Hero R(S);   //copy constructor
    R.print();

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('H');
    char name[6] = "Vivek";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    // Assignment Operator
    hero1 = hero2;

    hero1.print();

    hero2.print();

    //Destructor :--
    //Static
    Hero d;

    //Dynamic
    Hero *e = new Hero();
    //manually destructor call for only dynamic allocation
    delete b;   //this is manually destructor call


    //Static Keyword
    //static member data are do not need object. It directly access by class.
    cout << Hero::timeToComplete << endl;  //this is good way to access static member data

    Hero t;
    cout << t.timeToComplete << endl;  //this is wrong way to access static member data

    //Static function
    //static function are do not need object. It directly access by class. and Static function do not have this keyword.
    cout << Hero::random() << endl;
}
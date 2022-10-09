#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Character{

    // Properties

    private:
    int health;
    public:
    char *name;
    char level;

    Character(){
        cout << "Constructor Called" << endl;
        name = new char[100];
    }
    
    // Paramerterised Constructor
    Character(int health){
        this -> health = health;
    }

    Character(int health, char level){
        this -> level = level;
        this -> health = health;
    }
/*
    // Copy Constructor
    Character(Character& temp){
        cout << "My copy Constructor" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }
*/
    // Deep Copy Constructor
    Character(Character& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;  
    }
    void print(){
        cout << endl;
        cout << "[ Name: " << this -> name << " ,";
        cout << "health: " << this -> health << " ,";
        cout << "level: "<< this -> level << " ]";
        cout << endl << endl;;
    }

    // Getter Function
    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    void setName(char name[]){
        this->name = name;
    }

    // Destructor
    ~Character(){
        cout << "Destructor Called" << endl;
    }


};

int main()
{
    Character mario;
    mario.setHealth('A');
    char name[6] = "super";
    mario.setName(name);
    mario.print();

    Character character2(mario);
    character2.print();

    mario.name[0] = 'D';
    mario.print();

    character2.print();


    /*
    Character mario(90, 'A');
    mario.print();
    // Copy Constructor
    Character goku(mario);

    goku.print();
   */ 

    /*
    Character mario(100);
    // cout << "Address of mario:- " << &mario << endl;
    // mario.getHealth();
    mario.print();

    // Dynamic
    Character *pikachu = new Character(100);
    pikachu -> print();
    delete pikachu;

    Character temp(75, 'A');
    temp.print();
    */
    return 0;
}

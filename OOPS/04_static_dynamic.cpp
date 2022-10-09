#include <iostream>
#include <string>
using namespace std;

class Character{

    // Properties

    private:
    int health;
    public:
    char level;
    

    // Getter Function
    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }


};

int main()
{
    // Static Allocation
    Character mario;
    mario.setHealth(80);
    mario.level = 'A';
    cout << "Level is:- " << mario.level << endl;
    cout << "Health is:- " << mario.getHealth() << endl;

    cout << endl; 
    // Dynamic Allocation
    Character *pikachu = new Character;
    pikachu->setHealth(100);
    pikachu->level = 'A';
    cout << "Level is:- " << (*pikachu).level << endl;
    cout << "Health is:- " << (*pikachu).getHealth() << endl;
    cout << endl; 

    // OR
    cout << "Level is:- " << pikachu->level << endl;
    cout << "Health is:- " << pikachu->getHealth() << endl;


    delete pikachu;

    //Character mario;
    // Read about padding and greedy alignment
    // cout << endl << "Size of mario:- " << sizeof(mario) << endl;
    // Using Setter
    // mario.setHealth(95);
    // mario.level = 'D';

    // Using Getter
    // cout << "Health is:- " << mario.getHealth() << endl;
    // cout << "level is:- " << mario.level << endl;

    return 0;
}

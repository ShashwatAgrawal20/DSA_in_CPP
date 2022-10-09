#include <iostream>
using namespace std;

// They are for, where you can access the data members, wheather you can access them only inside the class or you can access them from another class too or where does the scope lies of the data members are shown using the access modifiers. 

// By default if you don't supply any it is a private access modifier 

// There are 3 kind of access modifiers:- 
// 1) Public         --> Can be accessed from anywhere 
// 2) Private        --> Can be only used inside the class
// 3) Protected

// Getter and Setter are the method or the functions by which if you want to access the private data members of the class you can do that (these are nothing but the public functions which return the private data members)

// Getter    -->    Fetch Data
// Setter    -->    Set Value && You can also put some checks ( like only this user can do this as its a function )

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
    Character mario;
    // Read about padding and greedy alignment
    cout << endl << "Size of mario:- " << sizeof(mario) << endl;
    // Using Setter
    mario.setHealth(95);
    mario.level = 'D';

    // Using Getter
    cout << "Health is:- " << mario.getHealth() << endl;
    cout << "level is:- " << mario.level << endl;

    return 0;
}

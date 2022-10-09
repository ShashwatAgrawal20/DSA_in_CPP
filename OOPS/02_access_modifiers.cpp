#include <iostream>
using namespace std;

// They are for, where you can access the data members, wheather you can access them only inside the class or you can access them from another class too or where does the scope lies of the data members are shown using the access modifiers. 

// By default if you don't supply any it is a private access modifier 

// There are 3 kind of access modifiers:- 
// 1) Public         --> Can be accessed from anywhere 
// 2) Private        --> Can be only used inside the class
// 3) Protected

class Character{

    // Properties

    public:
    int health;
    char level;

};

int main()
{
    Character mario;

    mario.health = 95;
    mario.level = 'D';

    cout << "Health is:- " << mario.health << endl;
    cout << "level is:- " << mario.level << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Character{
    int health;
};

class empty_class{

};

int main()
{
    cout << endl << "Size (Empty Class):- " << sizeof(empty_class) << " byte" << endl;
    empty_class Empty;
    cout << "Size (Empty Class Object):- " << sizeof(Empty) << " byte" << endl;

    cout << "Size (Class):- " << sizeof(Character) << " byte" << endl;
    Character Nobita;
    cout << "Size (Object):- " << sizeof(Nobita) << " byte" << endl;
    return 0;
}

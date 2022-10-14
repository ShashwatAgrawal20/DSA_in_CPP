#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        int weight;
        int age;
    public:
        void speak(){
            cout << "Speaking:- " << endl;
        }

};

class Dog: public Animal{

};

class lab: public Dog{

};

int main()
{
    lab l;
    l.speak();
    cout << sizeof(Dog) << endl;
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        int weight;
        int age;
    public:
        void animal_speak(){
            cout << "Animal Speaking " << endl;
        }

};

class Human{
    public:
        string color;
    public:
        void speak(){
            cout << "Human Speaking " << endl;
        }
};

class Hyb: public Animal, public Human{

};

int main()
{
    Hyb ob1;
    ob1.animal_speak();
    ob1.speak();
    
    return 0;
}

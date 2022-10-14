#include <iostream>
using namespace std;

class Human{

    public:
        int height;
        int weight;
        int age;
    private:
        int id;

    public:
        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight = w;
        }

};

class Male: public Human{

    public:
        string color;

    public:
        void sleep(){
            cout << "Sleeping" << endl;
        }

};

class FeMale: protected Human{

    public:
        string color;

    public:
        void sleep(){
            cout << "Sleeping" << endl;
        }

        void getWeight(){
            cout << "Weight is:- " << this-> weight << endl;
        }

};


int main()
{
    Male m1;
    FeMale f1;
    cout << m1.height << endl;
    f1.getWeight();


//    Male object1;
//    object1.setWeight(55);
//    cout << "Age:- " << object1.age << endl;
//    cout << "Weight:- " << object1.weight << endl;
//    cout << "Height:- " << object1.height << endl;
//
//    cout << "Color:- " << object1.color << endl;
//    object1.sleep();


    return 0;
}

#include <iostream>
using namespace std;

class A{
    public:
        void func1(){
            cout << "Class A & func1" << endl;
        }
};

class B: public A{
    public:
        void func2(){
            cout << "Class A & func2" << endl;
        }
};

class C: public A{
    public:
        void func3(){
            cout << "Class A & func3" << endl;
        }
};

int main()
{
    cout << endl << "Using class A" << endl;
    A object1;
    object1.func1();
    cout << endl << "Using class B" << endl;
    B object2;
    object2.func1();
    object2.func2();
    cout << endl << "Using class C" << endl;
    C object3;
    object3.func1();
    object3.func3();
    return 0;
}

#include <iostream>
using namespace std;

void update_using_reference(int &n){
    n++;
}

void update(int n){
    n++;
}

int main()
{
/*
    int i = 10;
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    cout << endl;

    cout << &i << endl;
    cout << &j << endl;

*/

    int n = 5;
    cout << "Before " << n << endl;
    update(n);
    cout << "After " << n << endl;

    cout << endl << "Updating using reference:- " << endl << endl;

    int using_ref = 1;
    cout << "Before " << n << endl;
    update_using_reference(n);
    cout << "After " << n << endl;
    

    return 0;
}

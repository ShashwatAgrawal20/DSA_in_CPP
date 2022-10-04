#include <iostream>
using namespace std;

void counting(int n){
    if(n == 0){
        return;
    }
    
    counting(n - 1);
    cout << n << endl;
}

int main()
{
    int number;
    cout << "Enter a number:- ";
    cin >> number;
    cout << endl;
    counting(number);

    return 0;
}

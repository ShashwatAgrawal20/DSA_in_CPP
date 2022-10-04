#include <iostream>
using namespace std;

int factorial(int n){

    // Base Case
    if(n==0){
        return 1;
    }

    return n * factorial(n - 1);

}


int main()
{
    int number;
    cout << "Enter a number for factorial:- ";
    cin >> number;

    int ans = factorial(number);

    cout << "Factorial is:- " << ans << endl;

    return 0;
}

#include <iostream>
using namespace std;


int power(int n){


    if(n == 0){
        return 1;
    }

    return 2 * power(n - 1);
    

}


int main()
{
    int number;
    cout << "Enter a number:- ";
    cin >> number;

    int ans = power(number);
    cout << "The ans is:- " << ans << endl;

    return 0;
}

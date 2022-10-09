#include<iostream>
using namespace std;


bool isPrime(int n){

    for(int i = 2; i<n; i++){
        // If it divides it's not a prime number
        if(n%i==0){
            return 0;
        }
    }

    return 1;

}


int main(){

    int number;
    cout<<"Enter a number:- ";
    cin>>number;

    if(number==1){
        cout << number << " is nither prime nor composite";
    }

    if(isPrime(number)){
        cout << number << " is a prime number" <<endl;
    }
    else{
        cout << number << " is not a prime number" << endl;
    }

    return 0;
}

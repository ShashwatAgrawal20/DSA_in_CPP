#include<iostream>
using namespace std;


// Return 1 if Even
// Return 0 if False


bool isEven(int num){

    // Odd
    if(num & 1){
        return 0;
    }

    return 1;

}



int main(){

    int number;
    cout<<"Enter a Number:- "<<endl;
    cin>>number;

    if(isEven(number)){
        cout << "Number is Even" <<endl;
    }


    else{
        cout<<"Number is Odd"<<endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}


int main(){


    int a, b;

    cout<<"Enter the value of a:- "<<endl;
          cin>>a;

          cout<<"Enter a value of b:- "<<endl;
                cin>>b;

    int answer = power(a, b);

    cout<<"The answer is:- "<<answer<<endl;
    
    return 0;
}

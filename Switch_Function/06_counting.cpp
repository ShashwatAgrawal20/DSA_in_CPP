#include<iostream>
using namespace std;
void printcount(int n){

    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }

}


int main(){

    int n;
    cout<<"Till where you want to print"<<endl;
    cin>>n;

    printcount(n);

}

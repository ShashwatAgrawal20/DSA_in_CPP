#include<iostream>
using namespace std;


int main(){

	int a, b;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;

	char oper;
	cout<<"Enter the operation:- "<<endl;
	cin>>oper;

	switch( oper ){

		case '+': cout<<"The addition is:- "<<a+b<<endl;
			break;


		case '-': cout<<"The substraction is:- "<<a-b<<endl;
			break;


		case '*': cout<<"The multi is:- "<<a*b<<endl;
			break;


		case '/': cout<<"The divi is:- "<<a/b<<endl;
			break;

		default: "Operation not supported"

	}

	return 0;
}
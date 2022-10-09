#include<iostream>
using namespace std;

int main(){

	int num = 5;

	switch( num ){
		case 1: cout<<"It's a one";
		// We can't use the continue inside the switch statement because it expect us to be in the loop
			// continue;
			break;
		case 2: cout<<"It's a two";
			break;
			
	}

	return 0;
}
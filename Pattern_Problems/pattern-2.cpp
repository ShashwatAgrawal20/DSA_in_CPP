#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	int rows = 1;

	while(rows<=n){
		int columns = 1;
		while(columns<=n){
			cout<<columns;
			columns++;
		}
		cout<<endl;
		rows++;
	}



	return 0;
}
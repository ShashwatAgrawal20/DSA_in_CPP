#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "Enter the number of rows:- ";
    cin >> row;

    int col;
    cout << "Enter the number of col:- ";
    cin >> col;


    int **arr = new int *[row];

    // Creating a 2D array
    for(int i = 0; i<row; i++){
        arr[i] = new int [col];
    }
    

    // Input taking
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
        
    }

    cout << endl;
    // Output displaying 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing the memory
    
    for (int i = 0; i < row; i++) {
        delete [] arr[i];
    }

    delete [] arr;

    cout << "Memory released" << endl;

    return 0;
}

#include <iostream>
using namespace std;

void print(int arr[], int size){

    cout << "Size of the array is:- " << size << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool linearSearch(int arr[], int size, int key){

    print(arr, size);

    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    
    else{
        int remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }


}


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 5;

    bool ans = linearSearch(arr, size, key);

    if(ans){
        cout << "Element found";
    }

    else{
        cout << "Element not found";
    }

    return 0;
}

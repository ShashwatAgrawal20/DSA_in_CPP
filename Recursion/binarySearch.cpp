#include <iostream>
using namespace std;

void print(int arr[], int start, int end){

    for (int i = start; i <= end; i++) {

        cout << arr[i] << " ";
        
    }cout << endl;

}

bool binarySearch(int arr[], int start, int end, int key){

    cout << endl;
    print(arr, start, end);
    cout << endl;

    if (start > end){
        return 0;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid + 1, end, key);
    }

    else{
        return binarySearch(arr, start, mid - 1, key);
    }

}


int main()
{
    int arr[100];
    int size;
    int key;
    cout << "Enter the size of the array:- ";
    cin >> size;
    cout << endl;
    if(size > 100){
        cout << "It must be smaller than 100";
        return 0;
    }
    cout << "Enter the elements of the array:- ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the element you want to search for:- ";
    cin >> key;

    cout << "Present or not:- " << binarySearch(arr, 0, size - 1, key) << endl;

    return 0;
}

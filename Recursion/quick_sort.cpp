#include <iostream>
#include <type_traits>
using namespace std;

int partition(int *arr, int s, int e){
    
    int pivot = arr[s];

    int count = 0;
    for (int i = s+1; i <= e; i++) {
        if(arr[i] <= pivot){
            count++;
        }
    }

    // Placing the pivot element at the right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    

    // Making sure all the element before the pivot are less than it & greater than on another partition
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }
    
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
        }

    }

    return pivotIndex;
}


void quickSort(int *arr, int s, int e){

    // Base Case
    if(s >= e){
        return;
    }

    // Parting
    int p = partition(arr, s, e);

    // Recursive call for quickSort for the left part array
    quickSort(arr, s, p-1);
    // Recursive call for quickSort for the right part array
    quickSort(arr, p+1, e);


}


int main()
{
    int arr[10] = {2, 23, 34, 1, 83, 73, 3, 92, 174, 9273};
    int n = 10;

    quickSort(arr, 0, n-1);
        
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

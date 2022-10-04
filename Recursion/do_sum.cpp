#include <iostream>
using namespace std;

int arr_sum(int arr[], int size){

    int sum = 0;

    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    else{
        int remainingPart = arr_sum(arr + 1, size - 1);
        sum = arr[0] + remainingPart;
        return sum;
    }


}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int ans = arr_sum(arr, size);
    cout << "The sum of the array is:- " << ans << endl;

    return 0;
}

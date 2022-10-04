#include <iostream>
#include <type_traits>
using namespace std;

void reverse(string &str, int i, int j){
    
    cout << "Recursive call for:- " << str << endl;

    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);

}

int main()
{
    string name = "Shashwat";

    cout << endl;

    reverse(name, 0, name.length()-1);

    cout << endl;

    cout << name;


    return 0;
}

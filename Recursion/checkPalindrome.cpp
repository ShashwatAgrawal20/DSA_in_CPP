#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }

    else{
        return checkPalindrome(str, i+1, j-1);
    }



}

int main()
{
    // string name = "hello";
    string name = "racecar";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if(isPalindrome){
        cout << "String is a palindrome" << endl;
    }
    else{
        cout << "String is not a palindrome" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

void reachDestination(int source, int destinatio){

    cout << "Source " << source << " destinatio " << destinatio << endl;
    if(source == destinatio){
        cout << endl;
        cout << "Reached destination";
        cout << endl;
        return;
    }

    source++;
    reachDestination(source, destinatio);

}

int main()
{
    int destination = 10;
    int source = 1;

    cout << endl;
    reachDestination(source, destination);

    return 0;
}

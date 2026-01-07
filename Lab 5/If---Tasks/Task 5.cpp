#include <iostream>
using namespace std;

int main() {
    char s;
    cout << "Enter the colour of signal (R/G/Y): ";
    cin >> s;

    if(s == 'R' || s == 'r')
        cout << "Stop";

    if(s == 'G' || s == 'g')
        cout << "Go";

    if(s == 'Y' || s == 'y')
        cout << "Slow Down";
   return 0;
}

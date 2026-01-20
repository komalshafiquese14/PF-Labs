#include <iostream>
using namespace std;

// Function to check even or odd
void checkEvenOdd(int num)
 {
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    checkEvenOdd(4);
    checkEvenOdd(7);

    return 0;
}


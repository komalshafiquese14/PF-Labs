#include <iostream>
using namespace std;

int main()
 {
    int* ptr = NULL;   
   
    if (ptr == NULL) {
        cout << "Pointer is null and not pointing to any memory." << endl;
    } else {
        cout << "Pointer address: " << ptr << endl;
    }

    return 0;
}

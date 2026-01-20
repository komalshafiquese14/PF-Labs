#include <iostream>
using namespace std;

int main()
 {
    int num = 20;         // Integer variable
    int* ptr = &num;     

    *ptr = 50;          
    // Updated value 
    cout << "Modified value of num: " << num << endl;

    return 0;
}

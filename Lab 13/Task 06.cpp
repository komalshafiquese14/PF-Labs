
#include <iostream>
using namespace std;

int main() {

    int num = 100;        

    void* ptr;            
    ptr = &num;           

    int* p;               
    p = (int*)ptr;        
    cout << *p;           

    return 0;
}


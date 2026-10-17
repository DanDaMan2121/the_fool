
// Stack vs. heap, new/delete conceptually, leaks

// STACK
// Local variables are stored and destoryed on the stack automatically.
// small and used for local variables and return addresses
// FILA

// HEAP
// The remained ram not used by windows or other applications is up for grabs
// this remaining ram is called the heap
// no other program can use the memory we allocated     

// new and delete operators are used to allocate and deallocate memory from the heap
// for every new variable there must be a delete for that variable

// MEMORY LEAK
// if you forget to delete your allocated RAM then the amoount of ram your program uses will go up and up


#include <iostream>
using namespace std;

void createVar(int val) {
    int* i = new int; // creates a pointer in the saved in the heap
    *i = val;

}

int main( ) {
    int val = NULL;
    cin >> val;
    createVar(val);
    // cout << "value stored at i: " << endl;
    
    return 0;
}
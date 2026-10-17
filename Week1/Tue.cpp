// Pointers, addresses, dereferencing, nullptr; pointer exercises

#include<iostream>
using namespace std;

int main() {
    // POINTER -- a variable that stores the memory address of another variable instead of storing a direct value
    int varA = 5;
    cout << "Address of varA: " << &varA << endl;
    int* ptrA = &varA;  
    cout << "Address of ptrA: " << ptrA << endl;

    // dereferencing a pointer allows you to see the variable stored at that address

    cout << "value of varA: " << varA << endl;
    cout << "value stored at ptrA address: " << *ptrA << endl;

    // ALOT SAFER to use than null
    int* ptrB = nullptr; 
    cout << "value of ptrB: " << endl;
    cout << "value of address of ptrA" << &(*ptrA) << endl;



}
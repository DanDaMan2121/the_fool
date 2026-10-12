#include <iostream>
using namespace std;
// pass by reference, pass by value, const 
// MONDAY 10/12/26


// pass by value //
// when a parameter is passed into a function, it is copied, 
// thus an change to the copied parameter would not affect
// the initial parameter

void passbyValue(int a, int b) {
    a = 0;
    b = 1;
    cout << "a inside Value function: " << a << endl;
    cout << "b inside Value function: " << b << endl;
}


// pass by reference //
// when a parameter is passed as a reference you are giving the memory location
// of the actual parameter and it is being copied as the memory location of the corrosponding parameter

// often used when we want to return more than one value from a function 
// when the intial parameter needs to be changed
// saves memory space

void passbyReference(int &a, int &b) {
    a = 1111;
    b = 9999;
    cout << "a inside reference function: " << a << endl;
    cout << "b inside reference function: " << b << endl;

}


// const
// constant variables are immutable. used to guarantee a value will not change.
// allows me to pass a value and ensure that it does not get modified.

void passConst(const int& c) {
    cout << "Variable C: " << c << endl; 
}




int main() {
    int varA = 10;
    int varB = 12;
    const int varC = 7;
    passbyValue(varA, varB);
    cout << "a after the function: " << varA << endl;
    cout << "b after the function: " << varB << endl << endl;

    passbyReference(varA, varB);
    cout << "a after the function: " << varA << endl;
    cout << "b after the function: " << varB << endl;

    passConst(varB);


    return 0;
}
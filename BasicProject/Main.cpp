/***
Copyright Winter4cool
* This is first program for basic understanding.
* This module help to swapping of the number without using the third number.
* 
***/
// include files
#include <iostream>
#include <string>

// Template for Swapping Number
template <class T>
T SwapNumber(T *a, T *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void SwapNumber(std::string *a, std::string *b) {
    std:: string temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*
void SwapNumber(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void SwapNumber(float *a, float *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}*/

int main() {
    int i1 = 4, j1 = 10;
    std::cout << "Before Swapping " << std::endl;
    std::cout << "i1 = " << i1 << "\t" << "j1 = " << j1 << std::endl;
    SwapNumber(&i1, &j1);
    std::cout << "After Swapping " << std::endl;
    std::cout << "i1 = " << i1 << "\t" << "j1 = " << j1 << std::endl;
    float i2 = 4.5, j2 = 10.5;
    std::cout << "Before Swapping " << std::endl;
    std::cout << "i2 = " << i2 << "\t" << "j2 = " << j2 << std::endl;
    SwapNumber(&i2, &j2);
    std::cout << "After Swapping " << std::endl;
    std::cout << "i2 = " << i2 << "\t" << "j2 = " << j2 << std::endl;
    char i3 = 'l', j3 = 'k';
    std::cout << "Before Swapping " << std::endl;
    std::cout << "i3 = " << i3 << "\t" << "j3 = " << j3 << std::endl;
    SwapNumber(&i3, &j3);
    std::cout << "After Swapping " << std::endl;
    std::cout << "i3 = " << i3 << "\t" << "j3 = " << j3 << std::endl;
    std::string i4 = "India", j4 = "Asia";
    std::cout << "Before Swapping " << std::endl;
    std::cout << "i4 = " << i4 << "\t" << "j4 = " << j4 << std::endl;
    SwapNumber(&i4, &j4);
    std::cout << "After Swapping " << std::endl;
    std::cout << "i4 = " << i4 << "\t" << "j4 = " << j4 << std::endl;
    return 0;
}


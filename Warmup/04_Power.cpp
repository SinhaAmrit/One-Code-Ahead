//? Write a program to find power of a number by using the inbuilt library function and manually too.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int base, exp, temp = 1;
    cout << "Enter base and exponent to calculate: ";
    cin >> base >> exp;
    // Using inbuilt library
    cout << "Base " << base << " to the power " << exp << " is " << pow(base, exp) << endl;
    // manually
    for (int i = 1; i <= exp; i++)
        temp *= base;
    cout << "Base " << base << " to the power " << exp << " is " << temp << endl;
    return 0;
}
//? Write a program that takes three integers from the user and swaps them in cyclic order
//? using pointers.
#include <bits/stdc++.h>
using namespace std;
void cyclicSwap(int *a, int *b, int *c);
int main()
{
    int a, b, c;
    cout << "Enter values of a, b and c respectively: ";
    cin >> a >> b >> c;
    cout << "Value before swapping:" << endl;
    cout << " a: " << a << ", b: " << b << ", c: " << c << endl;
    cyclicSwap(&a, &b, &c);
    cout << "Value after swapping:" << endl;
    cout << " a: " << a << ", b: " << b << ", c: " << c << endl;
    return 0;
}
void cyclicSwap(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
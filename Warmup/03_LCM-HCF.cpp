//? Write a program to find LCM and HCF of two numbers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, temp, a, b;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    temp = max(num1, num2);
    num2 = min(num1, num2);
    num1 = temp;
    a = num1;
    b = num2;
    while (b != 0)
    {
        temp = b;
        b = num1 % b;
        a = temp;
    }
    cout << "HCF is " << a << endl;
    cout << "LCM is " << (num1 * num2) / a;
    return 0;
}